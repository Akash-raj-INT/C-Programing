#include<stdio.h>
#include<conio.h>

int main()
{
	FILE *fptr;
	char name[10];
	int sal;
	fptr=fopen("rec.txt","r");
	fscanf(fptr,"%s%d",name,&sal);
	while(!feof(fptr))
	{
		printf("%s%d",name,sal);
		fsacnf(fptr,"%s%d",name,&sal);
	}
	fclose(fptr);

}
