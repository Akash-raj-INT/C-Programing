#include<stdio.h>
int main()
{
	int a[]={1,2,3,4,5};
	int *p=a;
	//or
	//int *p=&a[0];
	int i;
	for(i=0;i<5;i++)
	{
		printf("\n%d",*(p+i)); //for value
		printf("\n%d",(p+i));// for addr.
	}
	return 0;
}
