#include<stdio.h>
#include<conio.h>
int main()
{
	FILE*fptr;
	char c;
	
	fptr=fopen("a.txt","w");
	printf("the line of text is ");
	while((c=getc(fptr))!=EOF)
	{
		printf("%c",c);
	}
	fclose(fptr);
	getch();
}
