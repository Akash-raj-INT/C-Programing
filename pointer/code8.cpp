#include<stdio.h>
int main()
{
	int i,n,arr[20],sum=0;
	int *pn=&n,*parr=arr,*psum=&sum;
	float mean=0.0,*pmean=&mean;
	printf("\Enter the number of element in the array:");
	scanf("%d",pn);
	for(i=0;i<*pn;i++)
	{
		printf("\n Enter the number");
		scanf("%d",(parr+i));
	}
	for(i=0;i<*pn;i++)
	{
		*psum=*psum+*(arr+i);
	}
	*pmean=*psum/ *pn;
	printf("\n the number you are entered are:");
	for(i=0;i<*pn;i++)
	printf("\n%d");
	printf("\n the sum is:%d",*psum);
	printf("/n the mean is:%d",*pmean);
}

