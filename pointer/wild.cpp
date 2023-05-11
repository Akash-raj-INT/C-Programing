#include<stdio.h>
int main()
{
	int *ptr;
	int a=10;
	//printf("%u",ptr);
	//printf("/n%d",*ptr);
	ptr= &a;
	printf("\n%d",ptr);
	return 0;
}
