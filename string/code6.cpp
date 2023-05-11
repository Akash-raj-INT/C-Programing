#include<stdio.h>
#include<string.h>
int main()
{
	char str1[20],str2[20];
	int x;
	printf("\n Enter first string:");
	gets(str1);
	printf("\n Enter second string:");
	gets(str2);
	x=stricmp(str1,str2);
	if(x==0)
	{
		printf("\n Strings are equal");
	}
	else if(x>0)
	{
		printf("\n First string is greater than seconf string are not equal");
	}
	else
	{
		printf("\n First String is less than second string(string are not equal");		
	}
	return 0;
}
