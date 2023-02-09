//wap to print the details of a student like name, registration no. , roll no. ,city, state, contact no, and CGPA using variable

#include<stdio.h>
#include<conio.h>


int main()
{
	char name[10]="akash";
	int Rollno = 28;
	int regno = 12220043;
	char city[10] = "Patna";
	char state[10] = "Bihar";
	int contactno = 8271250053;
	float Tgpa = 5.5;
	
	printf("\n Name = %s", name);
	printf("\n Rollno = %d", Rollno);
	printf("\n regno = %d", regno);
	printf("\n city = %s", city);
	printf("\n state = %s", state);
	printf("\n contact no = %d", contactno);
	printf("\n Tgpa = %d", Tgpa);
	return 0;
}
