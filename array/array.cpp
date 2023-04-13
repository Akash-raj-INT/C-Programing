#include<stdio.h>

int main(){
	int a[100],n,i;
	printf("\n Enter number of elements:");
	scanf("%d0,&n");
	printf("\n Enter array element:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n Entered array element are:");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	return 0;
}
