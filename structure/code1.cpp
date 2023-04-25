#include<stdio.h>
struct student
{
	char name[50];
	int roll;
	float marks;
	int age;
};
int main()
{
	struct student s,s1;
	printf("enter information of first student:\n");
	printf("enter name:");
	scanf("%s",s.name);
	printf("enter roll number:");
	scanf("%d",&s.roll);
	printf("Enter marks:");
	scanf("%f",&s.marks);
	printf("Enter age:");
	scanf("%d",&s.age);
	
    printf("enter information of second student:\n");
	printf("enter name:");
	scanf("%s",s.name);
	printf("enter roll number:");
	scanf("%d",&s1.roll);
	printf("Enter marks:");
	scanf("%f",&s1.marks);
	printf("Enter age:");
	scanf("%d",&s1.age);
	if(s.marks>s1.marks)
	{
		printf("\n Marks of first student are more..");
	}
	else{
		printf("\n Marks of second student are more..");
		return 0;
	}
		
