#include<stdio.h>
#include<conio.h>
int main()
{
	FILE*fptr;
	char c;
	fptr=fopen("a.txt","w");
	printf("Enter the line of text,press^z to stop ");
	while((c=getchar())!=EOF)
	{
		putc(c,fptr);
	}
	fclose(fptr);
}
