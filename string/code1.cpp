#include<stdio.h>
#include<string.h>
int main()
{
	char ori[20],dup[20];
	char*z;
	printf("\n Enter your name:");
	gets(ori);
	z=strcpy(dup,ori);
	printf("Orignial String is:%s",ori);
	printf("\nDuplicate String is:%s",dup);
	printf("\n Value of z is:%s",z);
	return 0;
}
