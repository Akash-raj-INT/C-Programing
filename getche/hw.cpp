//write a program to ask thew user to enter roll no. , reg no. , name ,city,state,cgpa and then display hole detail to the user.
#include <stdio.h>

int main() {
    int roll_no, reg_no;
    char name[50], city[50], state[50];
    float cgpa;

    printf("Enter roll number: ");
    scanf("%d", &roll_no);

    printf("Enter registration number: ");
    scanf("%d", &reg_no);

    printf("Enter name: ");
    scanf("%s", name);

    printf("Enter city: ");
    scanf("%s", city);

    printf("Enter state: ");
    scanf("%s", state);

    printf("Enter CGPA: ");
    scanf("%f", &cgpa);



    return 0;
}

