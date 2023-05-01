#include<stdio.h>
#include<conio.h>

int main(){
	FILE *fp;
	char temp,name[50];
	printf("enter name of file");
	scanf("%s",name);
	fp=fopen("name","r");
	while((temp=getc(fptr))!=EOF)
	{
		if(temp='x')
	{
			fseek(fp,-1,1);
	        putc('y,fp');
		}	
	}
     fclose(fp);
}
