#include<stdio.h>
#include<conio.h>
int  main()
{
	FILE*fp;
	char name[20],arr[50];
	printf("enter the file name");
	scanf("%s",name);
	fp=fopen(name,"w");
	if(fp==NULL)
	{
		printf("file can't be opened");
		
	}
	else{
		printf("the string is");
	    scanf("%s",arr);
	    fputs(arr,fp);
	}
	fclose(fp);
}
