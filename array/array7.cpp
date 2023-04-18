#include<stdio.h>
void value(int);
int main()
{
	int arr[100],n;
	int i;
	printf("\n Enter n:");
	scanf("%d",&n);
	printf("\n Enter the arry element:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\n Passing element by value:");
	for (i=0;i<5;i++)
	{
		value(arr[i]);
	}
	return 0;
}
	void value(int u)
	{
		printf("%d",u);
	}


