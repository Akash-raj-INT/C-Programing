#include<stdio.h>
#include<conio.h>


int main()
{
	int rollno;
	char name[10];
	
	printf(" Enter your name=");
	scanf("%s",&name);
	printf("\n Enter your rollno =");
	scanf("%d", &rollno);
	printf("\n your roll number is %d",rollno);
	printf("\n your name is  %s", name);
	return 0;
	
}
