#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

#define MAX 1
#define insert_num 1
#define del_num -1

void display_record();
void delete_record();
void insert_record();
void search_record();
void pack_details();
void print_slot();
int check_slot(int);
void update(int, int);

typedef struct customer {
    int registration_number;
    char cname[30];
    float bmi;
    int package;
    long double phone_number;
    char city[20];
    int slot;
} customer;

typedef struct slot {
    int slot_1;
    int slot_2;
    int slot_3;
    int slot_4;
} slot;

slot s, p;
customer c;
int i;
FILE *fp, *fs;

int main() {
    char username[20];
    char password[20];
    char correct_username[] = "USER";
    char correct_password[] = "PASS";

    printf("Username: ");
    scanf("%s", username);

    printf("Password: ");
    int index = 0;
    char ch;
    while (1) {
        ch = getch();
        if (ch == 13) { // Enter
            password[index] = '\0';
            break;
        } else if (ch == 8 && index > 0) { // Backspace
            index--;
            printf("\b \b");
        } else if (index < sizeof(password) - 1) {
            password[index++] = ch;
            printf("*");
        }
    }

    if (strcmp(username, correct_username) == 0 && strcmp(password, correct_password) == 0) {
        printf("\nLogin successful!\n");
        getch();
    } else {
        printf("\nInvalid username or password.\n");
        return 0;
    }

    fp = fopen("slot_timings.txt", "rb");
    if (fp == NULL) {
        fs = fopen("slot_timings.txt", "wb");
        p.slot_1 = 0;
        p.slot_2 = 0;
        p.slot_3 = 0;
        p.slot_4 = 0;
        fwrite(&p, sizeof(slot), 1, fs);
        fclose(fs);
    } else {
        fclose(fp);
    }

    int choice;
    while (1) {
        system("cls");
        printf("\n");
        printf("\t\t");
        for (i = 0; i < 70; i++)
            printf("*");
        printf("\n");
        printf("\t\t\t\t\tGYM MANAGEMENT\n");
        printf("\t\t");
        for (i = 0; i < 70; i++)
            printf("*");

        printf("\nSelect any of the following: \n");
        printf("1.Register\n");
        printf("2.Delete Record\n");
        printf("3.Search Record\n");
        printf("4.Display Records\n");
        printf("5.Exit\n\n");
        printf("Select Your choice:  ");
        scanf("%d", &choice);
        switch (choice) {
        case 1:
            insert_record();
            break;
        case 2:
            delete_record();
            break;
        case 3:
            search_record();
            break;
        case 4:
            display_record();
            break;
        case 5:
            exit(0);
        default:
            printf("\t\t\t\t.........Select a valid option...........");
            getch();
        }
    }
}

void insert_record() {
    FILE *fp, *fs;
    char temp_city[20];
    int resume = 1;
    int temp_package, choice;

    int temp_registration_number;
    fs = fopen("slot_timings.txt", "rb");
    fread(&s, sizeof(slot), 1, fs);
    fclose(fs);
    if ((s.slot_1 >= MAX) && (s.slot_2 >= MAX) && (s.slot_3 >= MAX) && (s.slot_4 >= MAX)) {
        printf("\nAll Slots are filled");
        printf("\n\t\t No More Bookings!");
    } else {
        printf("Enter customer registration number:  ");
        scanf("%d", &temp_registration_number);
        fp = fopen("details.txt", "ab+");
        int flag = 0;
        while (fread(&c, sizeof(customer), 1, fp)) {
            if (temp_registration_number == c.registration_number) {
                flag = 1;
                break;
            }
        }
        if (flag == 0) {
            c.registration_number = temp_registration_number;
            printf("Enter customer name:  ");
            scanf("%s", c.cname);
            printf("Enter customer Phone number:  ");
            scanf("%Lf", &c.phone_number);
            printf("Enter your BMI: ");
            scanf("%f", &c.bmi);
            printf("Enter City: ");
            scanf("%s", c.city);

            pack_details();
            while (1) {
                printf("\nselect Package: ");
                scanf("%d", &temp_package);

                if (temp_package == 1 || temp_package == 2) {
                    printf("\n\t\t\t\t.........package selected..........");
                    break;
                } else
                    printf("\n\t\t\t\t.......select a valid package..........\n\n");
            }
            c.package = temp_package;
            while (1) {
                print_slot();
                printf("\n select slot: ");
                scanf("%d", &choice);
                if (choice >= 1 && choice <= 4) {
                    if (check_slot(choice) == 0) {
                        printf("\n\t\t\t\t.......Slots are Full.........");
                        printf("\n\n Press  \"1\" to book another slot / select any other number to discard registration:  ");
                        scanf("%d", &resume);
                        if (resume != 1)
                            break;
                    } else {
                        printf("\t\t\t\t.........Slots are available...........");
                        break;
                    }
                } else {
                    printf("\t\t\t\t.........Select a valid slot............. ");
                }
            }
            if (resume == 1) {
                c.slot = choice;
                printf("\n\t\t\t\t........you are registered successfully...........");
                update(choice, insert_num);
                fwrite(&c, sizeof(customer), 1, fp);
                getch();
            }
        } else {
            printf("\n\tAlready registered with this registration id");
            printf("\n\n \t\t \t\t.........Press Any Key to Continue.........");
            getch();
        }
        fclose(fp);
    }
}

void delete_record() {
    FILE *fp, *fs;
    int temp_registration_number;
    int flag = 0;
    fp = fopen("details.txt", "rb");
    fs = fopen("new_details.txt", "wb");
    printf("\n Enter registration number : ");
    scanf("%d", &temp_registration_number);
    while (fread(&c, sizeof(customer), 1, fp)) {
        if (c.registration_number != temp_registration_number) {
            fwrite(&c, sizeof(customer), 1, fs);
        } else {
            flag = 1;
            update(c.slot, del_num);
        }
    }
    fclose(fp);
    fclose(fs);
    if (flag == 0)
        printf("\n\t\t\t.........Record not found..............");
    else {
        printf("\n\t\t\t........Record deleted successfully...........");
        remove("details.txt");
        rename("new_details.txt", "details.txt");
    }
    getch();
}

void search_record() {
    FILE *fp;
    int flag = 0;
    int temp_registration;
    fp = fopen("details.txt", "rb");
    printf("\n Enter Registration Number: ");
    scanf("%d", &temp_registration);
    while (fread(&c, sizeof(customer), 1, fp)) {
        if (temp_registration == c.registration_number) {
            printf("\n \t\t\t......Search record found.......\n\n");
            printf("\n \t  Registration Number: %d", c.registration_number);
            printf("\n \t\t\t Name: %s", c.cname);
            printf("\n \t\t Phone Number: %0.Lf", c.phone_number);
            printf("\n\t\t\t City: %s", c.city);
            printf("\n\t\t Slot Timings: ");
            if (c.slot == 1)
                printf("6AM-7AM");
            else if (c.slot == 2)
                printf("7AM-8AM");
            else if (c.slot == 3)
                printf("4PM-5PM");
            else if (c.slot == 4)
                printf("5PM-6PM");
            flag = 1;
            getch();
            break;
        }
    }
    fclose(fp);
    if (flag == 0) {
        printf("\n \t\t\t.........No Record found...............");
        getch();
    }
}

void display_record() {
    FILE *fp, *fs;
    fp = fopen("details.txt", "rb");
    fs = fopen("slot_timings.txt", "rb");
    fread(&s, sizeof(slot), 1, fs);
    if (s.slot_1 == 0 && s.slot_2 == 0 && s.slot_3 == 0 && s.slot_4 == 0) {
        printf("\n\t\t\t\t......No Records to Display..........");
    } else {
        printf("\nRegistration\tName\t\tPhone Number\t\tCity\t\tSlot\n");
        while (fread(&c, sizeof(customer), 1, fp)) {
            printf("%d\t\t%s\t\t%0.Lf\t%s", c.registration_number, c.cname, c.phone_number, c.city);
            if (c.slot == 1)
                printf("\t6AM-7AM\n");
            else if (c.slot == 2)
                printf("\t7AM-8AM\n");
            else if (c.slot == 3)
                printf("\t4PM-5PM\n");
            else if (c.slot == 4)
                printf("\t5PM-6PM\n");
        }
    }
    fclose(fp);
    fclose(fs);
    getch();
}

void pack_details() {
    printf("\n\n");
    printf("\t\t");
    for (i = 0; i < 70; i++) printf("*");
    printf("\n\n");
    printf("\t\t\tPackage 1:\t\t\tPackage 2\n");
    printf("\t\t\tTime: 1 Month\t\t\tTime: 3 Months\n");
    printf("\t\t\tCost: ₹400\t\t\tCost: ₹1000\n");
    printf("\t\t\tTrainer: Shahnawaz\t\tTrainer: Akash\n");
    printf("\n\n");
    printf("\t\t");
    for (i = 0; i < 70; i++) printf("*");
    printf("\n\n");
}

void print_slot() {
    printf("\nSlot 1:\tTimings: 6AM-7AM");
    printf("\nSlot 2:\tTimings: 7AM-8AM");
    printf("\nSlot 3:\tTimings: 4PM-5PM");
    printf("\nSlot 4:\tTimings: 5PM-6PM\n");
}

int check_slot(int sl) {
    FILE *fp = fopen("slot_timings.txt", "rb");
    fread(&s, sizeof(slot), 1, fp);
    fclose(fp);
    if (sl == 1 && s.slot_1 < MAX) return 1;
    if (sl == 2 && s.slot_2 < MAX) return 1;
    if (sl == 3 && s.slot_3 < MAX) return 1;
    if (sl == 4 && s.slot_4 < MAX) return 1;
    return 0;
}

void update(int choice, int update_num) {
    FILE *fp;
    fp = fopen("slot_timings.txt", "rb");
    fread(&s, sizeof(slot), 1, fp);
    fclose(fp);

    fp = fopen("slot_timings.txt", "wb");
    if (choice == 1) s.slot_1 += update_num;
    else if (choice == 2) s.slot_2 += update_num;
    else if (choice == 3) s.slot_3 += update_num;
    else if (choice == 4) s.slot_4 += update_num;

    fwrite(&s, sizeof(slot), 1, fp);
    fclose(fp);
}
