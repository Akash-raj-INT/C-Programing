#include<stdio.h>
int main()
{
	int *ptr;
	{
		int val=23;
		ptr=&val;
		printf("\n%d",*ptr);
		printf("\n%u",ptr);
	}
	printf("\n%u",ptr);
	ptr=NULL;
	printf("\n%u",ptr);
	return 0;
}
