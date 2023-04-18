#include<stdio.h>

int main(){
	int a[5]={1,2,3,4,5};
	int i;
	printf("\n Printing base address of the array:");
	printf("\n%u%u%u",&a[0],a,&a);
	printf("\n Printing addresses of all array element:");
	for(i=0;i<5;i++)
	{
		printf("\n%u",&a[i]);
	}
	return 0;
}
