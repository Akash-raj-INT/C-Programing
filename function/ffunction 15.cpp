#include<stdio.h>
int a = 10;
void print();
int main()
{
	printf("\nValue of a is:%d",a);
	print();
	printf("\nValue of a is:%d",a);
	return 0;
}
void print()
{
	printf("\nValue of a is:%d",a);
	a=20;
}
