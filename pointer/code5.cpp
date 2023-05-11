#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n=1;
	int *ptr=(int*)malloc(n*sizeof(int));
	*ptr=6;
	printf("%d",*ptr);
	printf("\n%d",ptr);
	printf("\n%d",ptr);
	ptr=NULL;
	printf("\n%d",ptr);
	return 0;
}
