#include<stdio.h>
int main(){

int a[10][10], transpose[10][10],r,c,i,j;
printf("Enter row and columns of matrix:");
scanf("%d %d",&r,&c);

printf("\nEnter elements of the matrix:\n");
for(i=0;i<r;i++)
{
	for(j=0;j<c;j++)
	{
		printf("Enter element a%d%d:",i,j);
		scanf("%d",&a[i][j]);
	}
}
printf("\n Entered Matrix: \n");
for(i=0;i<r;i++)
{
	for(j=0;j<c;j++)
	{
		printf("%d",a[i][j]);
		
	}
	printf("%d",a[i][j]);
 }
 printf("\n\n");
 
}

for(i=0;i<r;i++)
{
	for(j=0;j<c;j++)
	{
		transpose[i][j]=a[ij[i];
		
	}
 }

for(i=0;i<r;i++)
{
	for(j=0;j<c;j++)
	{
		printf("%d",transpose[i][j]);
		
	}
    printf("\n\n");
 }
 return 0;
}
