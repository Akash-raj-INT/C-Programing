#include<stdio.h>
int a=10;
void print();
int main()
{
	int a=1;
	printf("\nValue of a is:%d",a);
	print();
	return 0;
}
void print()
{
	printf("\nValue of a is:%d",a);
}
