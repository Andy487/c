#include<stdio.h>
#include<conio.h>
void main()
{
    int r,n,t=1;
    char ch='A';
    clrscr();
    for(r=1;r<=5;r++)
    {
     for(n=1;n<=5-r;n++)
	printf(" ");
     for(n=1;n<=2*r-1;n++)
	printf("%c",ch++);
     for(n=1;n<=2*r-1;n++)
	printf("%d",t++);
	printf("\n");
    }
      getch();
}