#include<stdio.h>
#include<conio.h>
void main()
{
     int a[10],i,n,sum=0;
     clrscr();
     printf("enter the size of array");
     scanf("%d",&n);
     printf("enter the elements");
     for(i=0;i<n;i++)
       scanf("%d",&a[i]);
       {
       for(i=n-1;i>=0;i--)
       printf("%d",a[i]);

       for(i=0;i<n;i++)
      sum=sum+a[i] ;
       printf("sum is %d",sum);
      } getch();
}
