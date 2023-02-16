#include<stdio.h>
int main()
{
	float marks;
	scanf("%f",&marks);
	if(marks>90)
	{
		printf("Grade A");
	}
	else if (marks>80)
	{
	
	printf("Grade B");
    }
    else if (marks>70)
    {
    	printf("Grade C");
	}
    else if (marks>60)
    {
    	printf("Grade D");
	}
	return 0;
}
