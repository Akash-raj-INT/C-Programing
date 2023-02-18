#include<stdio.h>

int main()
{
	int n = 10;
    printf("Enter no: ");
    scanf("%d",&n);
	while (n>0){
		printf("%d\n", n);
		n=n-1;
	}
	return 0;
}
