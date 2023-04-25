#include<stdio.h>
struct car{
   char name[50];
   int seats;
   float price;	
};
int main()
{
	int i;
	struct car myCar[100];
	for(i=0; i<100; i++){
		printf("\n\n enter data for car[%d]:\n", i);
		scanf("%s %d %f", &myCar[i].name, &myCar[i].seats, &myCar[i].price);
	}
	for(i=0;i<100; i++){
		printf("\dData about your car[%d] is: %s %d % f",i,myCar[i].name, myCar[i].seats,myCar[i].price);
	}
}
