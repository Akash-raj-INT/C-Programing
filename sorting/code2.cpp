#include<stdio.h>
struct car{
	char *name;
	int seats;
	float price;
};
int main()
{
	struct car mycar;
	mycar.name = "sizuki";
	mycar.price = 300000;
	mycar.seats = 5;
	printf("%s %f %d \n",mycar.name,mycar.price,mycar.seats);
}
