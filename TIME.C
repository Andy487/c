#include<stdio.h>
#include<conio.h>
void main()
{
   int h,m,s,add,t,w,choice,d,r,b;
   clrscr();
   printf("enter time");
   scanf("%d %d %d",&h,&m,&s);
   printf("1.please add value increase time in second\n");
   printf("2.please add value increase time in minute\n");
   printf("3.please add value increase time in hours\n");
   printf("enter your choice");
   scanf("%d",&choice);

   switch(choice)
{   case 1:

	     printf("enter add value");
	     scanf("%d",&add);
	     (d=add/60);
	     (r=add%60);
	     m=d+m;
	     s=r+s;
		  printf("%d %d %d\n",h,m,s);
	     t=s/60;
	     s=s%60;
	     m=m+t;
	     printf("%d %d %d\n",h,m,s);
	     b=m/60;
	     m=m%60;
	     h=h+b;
	      printf("your time %d %d %d",h,m,s);
				  break;
   case 2:
	     printf("enter add time in minute");
    scanf("%d",&add);
    (d=add/60);
    (r=add%60);
     h=h+d;
    m=r+m;
    printf("your time is %d %d %d",h,m,s);
    t=m/60;
    m=m%60;
   h=h+t;


    printf("now this time is %d %d %d",h,m,s);
	  break;
  case 3:
	 printf("enter add time in hours");
	 scanf("%d",&add);
	d=add/24;
	r=add%24;
     h=r+h;


     printf("%d %d %d",h,m,s);
     break;
	    default:
	    printf("wrong");
	   }
	    getch();
	    }