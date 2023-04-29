#include<stdio.h>
int main(){
	int a[100];
	int hold,i,j,n;
	printf("\n enter the value of n:");
	scanf("%d",&n);
	printf("\n enter t5he elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("data item i9n original order");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
		for(i=0;i<n-1;i++)
		{
			if(j=0;j<n-i+1;j++)
			{
				if(a[j]>a[j+1])
				{
					hold=a[j];
					a[j]=a[j+1];
					a[j+1]=hold;
				}
			}
		}
		printf("\n data item in ascending order");
		for(i=0;i<n;i++)
		{
			printf("%d",a[i])
		}
	}
	return 0;
}
