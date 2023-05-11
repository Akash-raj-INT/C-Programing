#include<stdio.h>
#include<string.h>
int main()
{
	char str1[20],str2[10];
	int x;
	printf("\nenter 1st string:");
	gets(str1);
	printf("\n enter 2nd string:");
	gets(str2);
	x=strcmp(str1,str2);
	if(x==0)
	{
		printf("string are equal");
	}
	else if(x>0)
	{
		printf("\n 1st string is greater then the second string");
	}
	else
	{
		printf("1st string is less then the second string");
	}
	return 0;
}
