#include<stdio.h>
void func1()
{
	auto int a =10;
	printf("\n a=%d",a);
}
void func2()

{
	auto int a=20;
	printf("\n a=%d",a);
}
int main()
{
	auto int a= 30;
	func1();
	func2();
	printf("\n a=%d",a);
	return 0;	
}

