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
		       d=d+add;

		 l1:
		     if(d>maxday)
		       {       d=d-31;
			       m++;
		       }
		     if(d>30)
		       {       d=d-30;
			       m++;
			       goto l1;
		       }
				       break;
    case 4:
    case 6:
    case 9:
    case 11:
		     maxday=30;
		       d=d+add;

		 l2:
		     if(d>maxday)
		       {       d=d-30;
			       m++;
		       }
		     if(d>31)
		       {       d=d-31;
			       m++;
			       goto l2;
			}
					break;
    case 7:
		   maxday=31;
			d=d+add;
			 d=d-31;
			       m++;
		 l3:
		      if(d>maxday)
		       {       d=d-31;
			       m++;
		       }
		     if(d>30)
			{       d=d-30;
			       m++;
			       goto l3;
			 }
					 break;
    case 2:
	     if((y%4==0) && (y%100!=0) || y%400==0)
		       maxday=29;
	     else
		       maxday=28;
			d=d+add;
		    d=d-maxday;
		    l4:
		     if(d>maxday)
		       {       d=d-30;
			       m++;
		       }
		     if(d>31)
		       {       d=d-31;
			       m++;
			       goto l4;
			}
					  break;
		     if(m>12)
		      {
			    m=m-12;
			      y++;
		      }
   }
		 printf(":%d %d %d",d,m,y);
		 getch();
}

