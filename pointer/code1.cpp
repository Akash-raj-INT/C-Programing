#include<stdio.h>
int main()
{
	int a;
	int *aPtr;
	a = 7;
	aPtr = &a;
	printf("The address of a is %p"
		   "\nThe value of aPtr is %p",&a,aPtr);
	printf("The address of a is %d"
		   "\nThe value of *aPtr is %d",&a, *aPtr);
	printf("\n\nShowing that * and &are complement of"
		   "each other\n&*aPtr = %p"
		   "\n*&aPtr = %p\n",&*aPtr, *&aPtr);
		   return 0;
}
