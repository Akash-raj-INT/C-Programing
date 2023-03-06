#include<stdio.h>
int main(){

int n, i=1;
printf("Enter the number to print the table:");
scanf("%d",&n);
while(i<=10){
	  printf("\n%d*%d=%d", n,i,(n*i));
	  i++;
  }
  return 0;
}

