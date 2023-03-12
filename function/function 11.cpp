#include<stdio.h>
void function();
int main()
{
	int a =1, b = 2;
	printf("\na is:%d,b is:%d",a,b);
	function();
	return 0;
}
void function()
{
	int c =3;
	printf("\nValue of c is:%d",c);
}
