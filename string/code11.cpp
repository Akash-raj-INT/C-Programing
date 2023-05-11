#include<stdio.h>
#include<string.h>
int main()
{
	char x[100];
	int i=0;
	printf("\n Enter the string:");
	gets(x);
	i=0;
	while (x[i]!='\0'){
		
		i++;
	}
	printf("\n Length of the string is:%d",i);
	
	return 0;
}
