#include<stdio.h>

int main()
{
	int x=10;
	char ch='A';
	void *gp;
	float f = 10.11;
	gp=&x;
	printf("\n Generic pointer points to the integer value=%d",*(int*)gp);
	gp=&ch;
	printf("\n Generic pointer now points to the character is %c",*(char*)gp);
	gp=&f;
	printf("\n Generic pointer points to the float value=%f",*(float*)gp);
	return 0;
}
