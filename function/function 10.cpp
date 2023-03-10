#include<stdio.h>
int x;  // declare x as a global variable

void print();
int main()
{
    extern int x;
    printf("%d\n",x);
    x=x+10;
  
}

