#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a =123;
	char str[100];
	itoa(a, str,2);
	printf("\n Binary value:%s",str);
	itoa(a,str,10);
	printf("\n Decimal value:%s",str);
	itoa(a,str,16);
	printf("\n Hexadecimal value:%s",str);
	itoa(a,str,8);
	printf("\n Octal value:%s",str);
	return 0;
}
