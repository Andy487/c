#include<stdio.h>
#include<conio.h>
void main()
{
      int r,b,s;
      clrscr();
      for(r=8;r>=1;r--)
      {
	for(b=1;b<=8;b++)
	printf(" ");
	for(s=8;s<=2*r-1;s++)
	printf("*");
	printf("\n");
      }
      getch();
}