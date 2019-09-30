#include<stdio.h>
#include<conio.h>
void main()
{
    int x,v,r,count=0;
    clrscr();
    printf("enter your value");
    scanf("%d",&x);
    printf("enter your digit which you want count");
    scanf("%d",&v);
    l1:
    if(x!=0)
      { r=x%10;
       x=x/10;
       if(r==v)
       count++;
      goto l1;
       }
     printf("%d",count);
      getch();
}