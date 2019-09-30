#include<stdio.h>
#include<conio.h>
void main()
{
    int a,r;
    printf("enter any number");
    scanf("%d",&a);
    l1:
    if(a!=0)
   { r=a%10;
    a=a/10;
    printf("%d",r);
    goto l1;
    }
 getch();
 }