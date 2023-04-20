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
  printf("Enter the loaction where you wise to delete from an array\n");
  scanf("%d",&position);
  for(c=position-1;c<n-1;c++)
  {
  	array[c]=array[c+1];
  }
   printf("resultant array is:\n");
    for(c=0;c<=n;c++)
    {
    	printf("%d\n",array[c]);
	}
	return 0;
}


