#include<stdio.h>
#include<conio.h>
void main()
{
	int i,a,sum;
	clrscr();
	sum=0;
	i=1;
	while(i<=10)
	{
	     printf("enter number");
	     scanf("%d",&a);
	     if(a==10)
	     break;
	     else
	     {
	     sum=sum+a;
	     i++;
	     }
	 }
	 printf("sum is %d",sum);
	 getch();
}