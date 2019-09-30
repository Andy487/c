#include<stdio.h>
#include<conio.h>
void main()
{
    int n, i=2;
    clrscr();
    printf("enter number upper limit upto want you even no will be print\n");
    scanf("%d",&n);
    l1:
    if(i<=n)
   {
    printf("%d\n",i);
    i=i+2;
    goto l1;
    }
    getch();
    }