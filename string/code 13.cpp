#include<stdio.h>
#include<string.h>
int main()
{
	char str1[100], str2[100], str3[200];
	int i=0, j=0;
	printf("\n enter the first string:");
	gets(str1);
	printf("\n Enter the second string:");
	gets(str2);
	while(str1[i]!='\0')
	{
		str3[i]=str1[i];
		i++;
		j++;
	}
	i=0;
	while(str2[i]!='\0')
	{
		str3[j]=str1[i];
		i++;
		j++;
	}
	str3[j]='\0';
	printf("\n the concatenated string is:");
	puts(str3);
	printf("\n reverse of string is:%s",str3);
	i=0;
	j=strlen(str)-1;
	while (i<j) {
		temp = str3[i]
		str3[i]=str
	}
	return 0;
}
