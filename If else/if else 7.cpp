#include<stdio.h>
int main()
{
   int pt;
   printf("Enter the number of nodes:");
   scanf("%d", &pt);
   switch(pt){
   	case 0:
   		printf("\nNo Geometry");
   	break;
    case 1:
	printf("\nA point");
	break;
	case 2:
	printf("\na line");
	break;
	case3:
	printf("\na triangele");
	break;
	case 4:
	printf("\na rectangle");
	break;
	case 5:
	printf("\na pentagon");
	break;
   default:
   printf("h")	
   }
   return 0;
}

