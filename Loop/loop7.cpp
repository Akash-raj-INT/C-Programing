#include<stdio.h>

int main()
	{
	  int n,i=1;
	  printf("Enter the no:");
	  scanf("%d",&n);
	do{
	  printf("\n%d*%d=%d", n,i,(n*i));
	  i=i++;
	}
	while(i<=10);
}
