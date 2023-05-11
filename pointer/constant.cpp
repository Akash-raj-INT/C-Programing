#include<stdio.h>
int main()
{
	int var1=60, var2=70;
	int *const ptr=&var1;
	printf("\n%d",*ptr);
	//ptr=&var2; invalid error
	//printf("\n%d",*ptr);
	return 0;
}
