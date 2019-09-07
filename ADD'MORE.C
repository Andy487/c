#include<stdio.h>
#include<conio.h>
void main()
{
   int d,m,y,maxday,add;
   clrscr();
   printf("enter a date");
   scanf("%d %d %d",&d,&m,&y);
   printf("enter your increase day");
   scanf("%d",&add);
   switch(m)
    {
    case 1:
    case 3:
    case 5:
    case 8:
    case 10:
    case 12:
		     maxday=31;
				break;
    case 4:
    case 6:
    case 9:
    case 11:
		     maxday=30;
				break;
	       }		     d=d+add;
			     printf("%d",d);
		 l1:
		     if(d>31)
		       {       d=d-31;
			       m++;
			       d=d-30;
			       m++;
			       goto l1;

			}

		 printf("%d %d %d",d,m,y);
		 getch();
}

