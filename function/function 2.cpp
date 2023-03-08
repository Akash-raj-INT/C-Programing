#include<stdio.h>

int cubeByValue(int n=5);

int main(void)
{
	int number;
	printf("the number: ");
	scanf("%d",&number);
	printf("the original value of number is %d", number);
	cubeByValue(number);
	printf("\nthe new value of nummber is %d\n", number);
 } 
 
 int cubeByValue( int n)
{
	return n*n*n;
}

