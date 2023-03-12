#include<stdio.h>
void myfunction(char name[], int age){
	printf("hello %s. and %d",name,age);
}

int main(){
	myfunction("akash", 3);
	return 0;
}
