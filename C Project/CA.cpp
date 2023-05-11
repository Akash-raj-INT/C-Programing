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
void search_by_name();
void search_by_registration();
void update(int, int);

typedef struct customer
{
    int registration_number;
    char cname[30];
    float bmi;
    int package;
    long double phone_number;
    char city[20];
    int slot;
} customer;

typedef struct slot
{
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
    
    // hardcoded username and password
    char correct_username[] = "kocbe";
    char correct_password[] = "262728";
    
    printf("Username: ");
    scanf("%s", username);
    
    printf("Password: ");
    scanf("%s", password);
    
    // compare the entered username and password with the correct ones
    if (strcmp(username, correct_username) == 0 && strcmp(password, correct_password) == 0) {
        printf("Login successful!\n");
    } else {
        printf("Invalid username or password.\n");
    }
    

    fp = fopen("slot_timings.txt", "rb");
    if(fp==NULL)
    {
        fs = fopen("slot_timings.txt", "wb");
        p.slot_1 = 0;
        p.slot_2 = 0;
        p.slot_2 = 0;
        p.slot_2 = 0;
        fwrite(&p, sizeof(slot), 1, fs);
    }
    fclose(fp);
    fclose(fs);
    int choice;
    while (1)
    {
        // getch(); 
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
        switch (choice)
        {
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

void insert_record()
{
    FILE *fp, *fs;
    char temp_city[20];
    int resume = 1;
    int temp_package, choice;
    
    int temp_registration_number;
    fs = fopen("slot_timings.txt", "ab+");
    fread(&s, sizeof(slot), 1, fs);
    if ((s.slot_1 >= MAX) && (s.slot_2 >= MAX) && (s.slot_3 >= MAX) && (s.slot_4 >= MAX))
    {
        printf("\nAll Slots are filled");
        printf("\n\t\t No More Bookings!");
    }
    else
    {
        printf("Enter customer registration number:  ");
        scanf("%d", &temp_registration_number);
        fp = fopen("details.txt", "ab+");
        int flag = 0;
        while (fread(&c, sizeof(customer), 1, fp))
        {
            if (temp_registration_number == c.registration_number)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            c.registration_number = temp_registration_number;
            printf("Enter customer name:  ");
            scanf("%s", c.cname);
            printf("Enter customer Phone number:  ");
            scanf("%Lf", &c.phone_number);
            printf("Enter your BMI: ");
            scanf("%f", &c.bmi);
            printf("Enter City: ");
            scanf("%s", c.city);
            printf("%s", c.city);

            pack_details();
            while (1)
            {
                printf("\nselect Package: ");
                scanf("%d", &temp_package);

                if (temp_package == 1)
                {
                    printf("\n\t\t\t\t.........package selected..........");
                    break;

                }
                else if (temp_package == 2)
                {
                    printf("\n\t\t\t\t.........package selected..........");
                    break;
                }
                else
                    printf("\n\t\t\t\t.......select a valid package..........\n\n");
                
            }
            c.package = temp_package;
            while (1)
            {
                print_slot();
                printf("\n select slot: ");
                scanf("%d", &choice);
                if (choice == 1 || choice == 2 || choice == 3 || choice == 4)

                {
                    if (check_slot(choice) == 0)
                    {
                        printf("\n\t\t\t\t.......Slots are Full.........");
                        printf("\n\n Press  \"1\" to book another slot / select any other number to discard registration:  ");
                        scanf("%d", &resume);
                        if (resume != 1)
                            break;
                    }
                    else
                    {
                        printf("\t\t\t\t.........Slots are available...........");
                        break;
                    }
                }
                else
                {
                    printf("\t\t\t\t.........Select a valid slot............. ");
                }
            }
            if (resume == 1)
            {
                c.slot = choice;
                printf("\n\t\t\t\t........you are registerd succesfully...........");
                update(choice, insert_num);
                fwrite(&c, sizeof(customer), 1, fp);
                getch();
            }
        }
        else
        {
            printf("\n\tAlready registered with this registration id");
            printf("\n\n \t\t \t\t.........Press Any Key to Continue.........");
            getch();
        }
    }
    fclose(fp);
}

void delete_record()
{
    FILE *fp, *fs;
    int temp_registration_number;
    int flag = 0;
    int temp_slot;
    fp = fopen("details.txt", "rb");
    fs = fopen("new_details.txt", "wb");
    printf("\n Enter registration number : ");
    scanf("%d", &temp_registration_number);
    while (fread(&c, sizeof(customer), 1, fp))
    {
        if (c.registration_number != temp_registration_number)
        {
            fwrite(&c, sizeof(customer), 1, fs);
        }
        else
        {
            flag = 1;
        }
    }
    fclose(fp);
    fclose(fs);
    if (flag == 0)
        printf("\n\t\t\t.........Record not found..............");
    else
    {
        printf("\n\t\t\t........Record deleted succesfully...........");
        update(c.slot, del_num);
        remove("details.txt");
        rename("new_details.txt", "details.txt");
        printf("\n new records are: ");
        display_record();
    }
    getch();
}
void search_record()
{
    FILE *fp, *fs;
    int flag = 0;
    int temp_registration;
    fp = fopen("details.txt", "rb");
    printf("\n Enter Registration Number: ");
    scanf("%d", &temp_registration);
    while (fread(&c, sizeof(customer), 1, fp))
    {
        if (temp_registration == c.registration_number)
        {
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
                printf("4AM-5AM");
            else if (c.slot == 4)
                printf("5AM-6AM");
            flag = 1;
            getch();
        }
    }
    fclose(fp);
    if (flag == 0)
    {
        printf("\n \t\t\t.........No Record found...............");
        getch();
    }
        
    
}
void display_record()
{
    FILE *fp, *fs;
    fp = fopen("details.txt", "rb");
    fs = fopen("slot_timings.txt", "rb");
    fread(&s, sizeof(slot), 1, fs);
    if (s.slot_1 == 0 && s.slot_2 == 0 && s.slot_3 == 0 && s.slot_4 == 0)
    {
        printf("\n\t\t\t\t......No Records to Display..........");
    }
    else{
        printf("\nregisration_number \tName \t\t Mobile Number \t\t City \t\t slot");
        while (fread(&c, sizeof(customer), 1, fp))
        {
            printf("\n%d  \t\t %s \t\t %0.Lf\t\t\ %s", c.registration_number, c.cname, c.phone_number,c.city);
            if(c.slot==1)
                printf("\t\t6AM-7AM");
            else if(c.slot==2)
                printf("\t7AM-8AM");
            else if (c.slot == 3)
                printf("\t4AM-5AM");
            else if (c.slot == 4)
                printf("\t5AM-6AM");
        }
    }
    fclose(fp);
    fclose(fs);
    getch();
}
void pack_details()
{
    printf("\n\n");
    printf("\t\t");
    for (i = 0; i < 70; i++)
        printf("*");
    printf("\n\n");
    printf("\t\t\tpackage 1:\t\t\t package:2\n");
    printf("\t\t\tTime:1month \t\t\t Time:3 months\n");
    printf("\t\t\tcost:400 \t\t\t cost:1000\n");
    printf("\t\t\tTrainer Name:Shahnawaz\t\t Trainer Name:Akash");

    printf("\n\n");
    printf("\t\t");
    for (i = 0; i < 70; i++)
        printf("*");
    printf("\n\n");
}
void print_slot()
{

    printf("\n\n");
    printf("\n slot 1:\n\t\tTimings:6AM-7AM");
    printf("\n slot 2:\n\t\tTimings:7AM-8AM");
    printf("\n slot 3:\n\t\tTimings:4PM-5AM");
    printf("\n slot 4:\n\t\tTimings:5PM-6APM");
    printf("\n\n");
}
int check_slot(int sl)
{
    FILE *fp, *fs;
    fp = fopen("slot_timings.txt", "rb");
    fread(&s, sizeof(slot), 1, fp);
    if (sl == 1)
    {

        if (s.slot_1 < MAX)
            return 1;
        return 0;
    }
    else if (sl == 2)
    {
        if (s.slot_2 < MAX)
            return 1;
        return 0;
    }
    else if (sl == 3)
    {
        if (s.slot_3 < MAX)
            return 1;
        return 0;
    }
    else if (sl == 4)
    {
        if (s.slot_4 < MAX)
            return 1;
        return 0;
    }
    fclose(fp);
}
void update(int choice, int update_num)
{
    slot p;
    FILE *fp, *fs;
    fp = fopen("slot_timings.txt", "rb");

    fread(&s, sizeof(slot), 1, fp);
    fclose(fp);
    fp = fopen("slot_timings.txt", "wb");

    if (choice == 1)
    {
        p.slot_1 = s.slot_1 + update_num;
        p.slot_2 = s.slot_2;
        p.slot_3 = s.slot_3;
        p.slot_4 = s.slot_4;
    }
    else if (choice == 2)
    {
        p.slot_1 = s.slot_1;
        p.slot_2 = s.slot_2 + update_num;
        p.slot_3 = s.slot_3;
        p.slot_4 = s.slot_4;
    }
    if (choice == 3)
    {
        p.slot_1 = s.slot_1;
        p.slot_2 = s.slot_2;
        p.slot_3 = s.slot_3 + update_num;
        p.slot_4 = s.slot_4;
    }
    if (choice == 4)
    {
        p.slot_1 = s.slot_1;
        p.slot_2 = s.slot_2;
        p.slot_3 = s.slot_3;
        p.slot_4 = s.slot_4 + update_num;
    }
    fwrite(&p, sizeof(slot), 1, fp);
    fclose(fp);
    remove("slot_timings.txt");
    fp = fopen("slot_timings.txt", "rb");
 
}
