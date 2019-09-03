#include<stdio.h>
#include<conio.h>
void main()
{
   int d,m,y,maxday,t,i;
   clrscr();
   printf("enter a date");
   scanf("%d %d %d",&d,&m,&y);
   printf("enter your increase day");
   scanf("%d",&i);
   switch(m)
    {
    case 1,3,5,7,8,10,12:
			maxday=31;
				   break;
    case 4,6,8,11:
			maxday=30;
				   break;
    case 2:
	if(y%4==0 && y%100!=0 || y%400==0)
		       maxday=29;
	else
		       maxday=28;
				   break;
	}
	 { d=d+i;
	if(d>maxday)
			d=d-maxday;
			m++;
	 if(m>12)
			m=m-12;
			y++;
			printf("%d %d %d",d,m,y);

	 }
	 getch();
	 }

