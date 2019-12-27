#include<stdio.h>
#include<conio.h>
void main()
  {
     int x,sum;
     int natural(int);
     clrscr();
     printf("enter any number");
     scanf("%d",&x);
     sum=natural(x);
     printf("sum of natural number is %d",sum);
     getch();
   }
       int natural(int a)
     {
	int c;
	if(a==1)
	return(a);
       c=a+natural(a-1);
       return(c);
      }