#include<stdio.h>

int main(){
  
int array[100],position,c,n,value;
printf("Enter number of elements in array:");
scanf("%d",&n);
printf("Enter %d element\n:",n);
for(c=0;c<n;c++)
{
	scanf("%d",&array[c]);
}
printf("Enter the location where you wish to insert an element");
scanf("%d",&position);
printf("Enter the value to inster:\n");
scanf("%d",&value);
for(c=n-1;c>=position-1;c--)
{
	array[c+1]=array[c];
}
    array[position-1]= value;
    
    printf("resultant array is:\n");
    for(c=0;c<=n;c++)
    {
    	printf("%d\n",array[c]);
	}
	return 0;
}
