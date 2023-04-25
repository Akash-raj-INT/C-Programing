#include<stdio.h>
struct car{
	char name[50];
	int seats;
	float price;
};
int main()
{
	struct car myCar = {"renault", 2, 500000};
	struct car *myCarPtr;
	myCarPtr = &myCar;
	
	print("%s %f %d \n%s %f %d \n%s %f %d\n", myCar.name, myCar.price, myCar.seats,myCarPtr->name, myCarPtr->price, myCarPtr->seats, {*myCarPtr}.name, {*myCarPtr}.price, {*myCarPtr}.seats);
	
	
}
