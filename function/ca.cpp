#include<stdio.h>
//int main()
//{
//	int m=5,n=2;
//	m+=-n;
//	printf("%d%d",m,n);
//	return 0;
//}

//{
//	int  a=2,b=5;
//	a=a^b;
//	b=b^a;            ans = 72
//	printf("%d%d",a,b);
//	return 0;
//}
//{
//	int a=20,b=15,c=5;
//	int d;
//	d=a==b+c;                         ans=1
//	printf("%d",d);
//}

//{
//  int a = 5, b = -7, c = 0, d;
//  d=++a&&++b||++c;
//  printf("\n%d%d%d",a,b,c,d);         ans=6,-6,0,1  
//  printf("\n%d",d);                 
//  return 0;
//}


//  int i=5;
//  int l=i/-4;
//  int k=i%-4;                        ans=-1,1
//  printf("%d %d\n",l,k);
//  return 0;

//   int i;
//   for(i=0;i<5;i++)
//   {
//   	int i=10;
//   	printf("%d",i);      ans 10, 10, 10, 10
//   	i++;
//     
//{
//	 	 
//	 int x=11,i;
//	 for(i=0;i<x;i+=3){
//	 	printf("start");
//	 	continue;
//	 	printf("End");
//	 } 
//	 return 0;
//	 
//	   	
// }

//{
//	int a=500,b=100,c;                   
//	if(!a>=400)
//	b = 300;                                  b=300 , c=200
//	c = 200;
//	printf("b=%d c=%d",b,c);
//
//}

//{
//	int a=1,b=1,c;
//	c=a++ + b;                               2,1,2
//	printf("%d,%d,%d",a,b,c);
//	return 0;
//}

//{
//    int i = 0;
//	int x = i++;   //i=1 hoga
//	int y = ++i;   //or yaha i=2.       
//	printf("%d %d\n",x,y);
//	return 0;	
//}

//{
//	int x=4,y,z;
//	y=++x;
//	z=x++;                       ans = 655
//	printf("%d%d%d",x,y,z);
//	return 0;       
//}
//{
//	int x=1,y=0,z=5;
//	int a = x&&y || z++;          ans 1
//	printf("%d",a);
//	return 0;
//}

//{ 
//   int x = 1, y = 0, z=5;       
//   int a =x&&y&&z++;
//   printf("%d",a);      ans 0
//   return 0; 
//}

//{
//	int a=7, b=5;
//	printf("%d",a|b);     ans 7
//	return 0;
//}

//{
//	int a = 10;
//	printf("%d",~a);
//	return 0;
//}

//{
//	    int i = 3;
//        int k = i % -2;           1
//        printf("%d\n", k);
//        return 0;
//
//}

//{
//        int x = 5.3 % 2;
//        printf("Value of x is %d", x);      1
//        return 0;
//    }


//    {
//        int a = 10;
//        double b = 5.6;
//        int c;
//        c = a + b;
//        printf("%d", c);
//        return 0;
//    }


//    {
//        int a=1,b=1,c;
//        c = a++ + b;
//        printf("%d,%d,%d", a,b,c);
//        return 0;
//    }

//    {
//        double b = 5 % 3 & 4 + 5 * 6;                  2.000000
//        printf("%lf", b);
//        return 0;
//    }

//    {
//        double b = 3 && 5 & 4 % 3;
//        printf("%lf", b);
//        return 0;                        1.000000
//    }

//{
//        double b = 5 & 3 && 4 || 5 | 6;
//        printf("%lf", b);                       1.000000
//        return 0;
//    }
//    

//{ 
//   int a=14,c=30,d;
//   d= a||c|5;
//   printf("%d",d);
//   }
//    {
//        int b = 5 + 7 * 4 - 9 * (3, 2);         ans 15
//        printf("%d", b);
//    }
//
//    {
//        int a = -1, b = 4, c = 1, d;
//        d = ++a && ++b || ++c;
//        printf("%d, %d, %d, %d\n", a, b, c, d);    0,4,2,1
//        return 0;
//    }

//{
// int v;
// printf("Enter the number :");
// scanf("%d", &v);
// if(v<10)
//   printf("number is less  than 10");
//return 0;
//}

//    {
//        int x = 5;
//        if (x < 1)
//            printf("hello");
//        if (x == 5)
//            printf("hi");
//        else
//            printf("no");
//        return 0;
//    }

//    {
//        int x = 0;
//        if (x == 0)
//            printf("hi");
//        else
//            printf("how are u");
//            printf("hello");
//        return 0;
//    }

   
//    {
//        int x = 1;
//        if (x > 0)
//            printf("inside if\n");
//        else if (x > 0)
//            printf("inside elseif\n");
//    }

//{ 
//	int i = 10; 
//	if (i == 10) 
//	{ 
//	if (i < 15) 
//	printf("i is smaller than 15\n");  
//	if (i < 12) 
//    printf("i is smaller than 12 too\n"); 
//	else
//	printf("i is greater than 15"); 
//	} 
//	return 0; 
//} 

//    {
//        int x = 0;
//        if (x == 1)
//            if (x >= 0)
//                printf("true\n");
//            else
//                printf("false\n");
//    }

// {
//        int x = 0;
//        if (x == 1)
//            if (x == 0)
//                printf("inside if\n");
//            else
//                printf("inside else if\n");
//        else
//            printf("inside else\n");
//        return 0;
//    }

//
//    {
//        double ch;
//        printf("enter a value between 1 to 2:");
//        scanf("%lf", &ch);
//        switch (ch)
//        {
//           case 1:
//              printf("1");
//              break;
//           case 2:
//              printf("2");
//              break;
//        }
//        return 0;
//    }

//    {
//        int ch;
//        printf("enter a value between 1 to 2:");
//        scanf("%d", &ch);
//        switch (ch)
//        {
//           case 1:
//              printf("1 ");
//           default:
//              printf("2");
//        }
//        return 0;
//    }


//    {
//        int ch;
//        printf("enter a value between 1 to 2:");
//        scanf("%d", &ch);
//        switch (ch)
//        {
//           case 1:
//              printf("1 ");
//              printf("hi");
//              break;
//           default:
//              printf("2\n");
//        }
//    }
    
    
//        {
//        int a = 1;
//        switch (a)
//        {
//           case a:
//              printf("Case A ");
//           default:
//              printf("Default");
//        }
//       return 0;
//    }

    
//    {
//        int i = 0;
//        while (i < 3)
//            i++;
//        printf("In while loop\n");
//    }


//    {
//        int i = 0;
//        while (++i)
//        {
//            printf("H");
//        }
//        return 0;
//    }
//{ 
//  int i;   
//  for (i = 1; i != 10; i += 2) 
//    printf("Hello"); 
//  return 0; 
//}
//{
//int i;
//for(i=1;i<10;i++);
//printf("%d",i);
//return 0;
//}

//    {
//        do
//            printf("In while loop ");
//        while (0);
//            printf("After loop\n");
//        return 0;
//    }

//    {
//        int i = 0;
//        do {
//            i++;
//            printf("In while loop\n");
//        } while (i < 3);
//       return 0;
//    }

//{
// int n;
// for (n=10; n>0; n=n-1){
//  if (n<8) 
//   break;
//  printf("%d", n);
// } //end for
//}

// { int x = 10;
// char y = 'a';
// x = x + y;   y=97
//float z = x + 1.0; 
//printf("x = %d, z = %f", x, z);
// return 0;
// } 


// {
// double x = 1.2;
// int sum = (int)x + 1; 
//printf("sum = %d", sum); 
//return 0;
// }


//{ 
//int a=6543; 
//printf("*%5d,*%-5d*",a,a); 
//return 0;
// } 


// {
// int a=123; 
//printf("*%06d*",a); 
//return 0; 
//}


// {
// float a=654.123456f;
// printf("%3.3f,%3.2f",a,a);
// return 0;
// }

//{
// char ch='A';
// ch=getchar(); 
//putchar(ch); 
//return 0;
// }



//	{
//	char ch[30];
//	printf("Enter the string:");
//	gets(ch);
//	printf("Entered string: %s", ch);
//	}


//{
//    int i=7;
// printf("%d%d%d%d",i++,i,++i,i+1);
// }


//void show();
//int main()
//{
//    show();
//    printf("hello");
//}
//void show()
//{
//    printf(" World");
//}
//

//void show();
//int main()
//{
//    show();
//    printf("hello");
//}
//void show()
//{
//    printf(" World");
//}


//void show();
//int main()
//{
//    show();
//    printf("hello");
//}
//void show()
//{
//   printf("World");
//    main();
//}

//int main()
//{
//    int i=7;
// printf("%d%d%d%d",i++,i,++i,i+1);}



//void fn1(int a){
//     printf("%d",a);
//     return a*a;
//   }
//int main()
//{
//    int a=5;
//    fn1(a);
//    printf("%d",a);
//}

//void fn1(int a){
//     printf("%d",a);
//     return a*a;
//   }
//int main()
//{
//    int a=5;
//    fn1(a);
//    printf("%d",a);
//}
//
//void fn1(int a){
//     printf("%d",a);
//}
//
//int main()
//{
//    int a=5;
//    fn1(a);
//    printf("%d",a);
//    return 0;
//}

// int f(int n);
//int main()
//{
//    int n=10;
//     printf("%d",f(n));
//}
//int f(int n)
//{
//    if(n>0)
//        return(n+f(n-2));
//}

//int main()
//{
//    printf("Hello");
//    main();
//    return 0;
//}

//#include<stdio.h>
//void func1()
//{
//	auto int a=10;    // Local variable of func1()
//	printf("\n a=%d",a);
//}
//void func2()
//{
//	auto int a=20; //Local variable of func2()
//	printf("\n a=%d",a);
//}
//int main()
//{
//    auto int a=30;//Local variable of main()
//	func1();
//	func2();
//	printf("\n a=%d",a);
//         return 0;
//}

//{
//extern int a;
//printf("%d",++a);
//return 0;
//}
//int a;

#include<stdio.h>
int main()
{
extern int a;
printf("%d",++a);
return 0;
}
int a;



































