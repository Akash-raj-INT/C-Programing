#include<stdio.h>
#include<conio.h>

int main()
{
	int marks,attendance;
	printf("\n enter your marks: ");
	scanf("%d",&marks);
	
	printf("\n enter your attendence: ");
	scanf("%d",&attendance);
	
	if(marks>60 && attendance>=75)
	{
		printf("Good");
	}
	else{
		printf("attend the classes & get good marks");
	}
}
