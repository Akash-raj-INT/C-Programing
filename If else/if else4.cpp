#include<stdio.h>

int main()
{
	int v;
	printf("Enter the no. :");
	scanf("%d",&v);
	if(v<10){
		printf("number is less than 10");
	}
	else if(v<100){
		printf("number is less than 100");
	}
	else{
		printf("no")
	}
	return 0;
}
