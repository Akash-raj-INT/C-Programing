#include<stdio.h>
int main(){
	int a[100],n,i,sum=0;
	printf("\nEnter number of element:");
	scanf("%d",&n);
	printf("\nEnter array elemnts:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	printf("\nSum of array element is:%d",sum);
	return 0;
}
