#include<stdio.h>
#include<conio.h>
void main()
{
   int d,m,y,div,add;
   clrscr();
   printf("enter a date");
   scanf("%d %d %d",&d,&m,&y);
   printf("enter your increase day");
   scanf("%d",&add);
   switch(m)
    {
    case 1,3,5,8,10,12:
			     d=d+add;
		       l1:
			      if(d>31)
		       {       d=d-31;
			 m++;
			       d=d-30;
			       m++;

			       goto l1; }
		break;
	  case 4,6,9,11:
		    d=d+add;
		    div=d/30;
		    m=m+div;
		l2:
		  if(d>30)
		 { d=d-30;
		  d=d-31;
		  goto l2;
		   }
		   case 2:
		      if(((y%4==0)&&(y%100!=0))||(y%400==0))
			d=28;
			d=d+add;

	 }	 printf("%d %d %d",d,m,y);

	 getch();

	 }

