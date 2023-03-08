#include<stdio.h>

int cubeByValue(int n);

int main(void)
{
	int number = 5;
	printf("the original value of number is %d", number);
	cubeByValue(number);
	printf("\n the new value of nummber is %d\n", number);
 } 
 
 int cubeByValue( int n)
{
	return n*n*n;
}
