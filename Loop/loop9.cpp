#include<stdio.h>
int main(){
	int n,i=1;
	printf("Ente the table of :");
	scanf("%d",&n);
	for (n; i<10; i=i+1){
		printf("\n%d*%d=%d", n,i,(n*i));
	  
	}
	return 0;
}
