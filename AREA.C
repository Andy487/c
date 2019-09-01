#include<stdio.h>
#include<conio.h>
void main()
{
   int choice,l,b,r;
   float result;
   clrscr();
   printf("1.area of right angle\n");
   printf("2.area of rectangle\n");
   printf("3.area of circle\n");
   printf("4.area of square\n");
   printf("enter your choice number");
   scanf("%d",&choice);
   switch(choice)
  {
   case 1:
	  printf("enter two value");
	  scanf("%d %d",&l,&b);
	  result=0.5*l*b;
	  printf("reesult %f",result);
				      break;

    case 2:
	  printf("enter two value");
	  scanf("%d %d",&l,&b);
	  result=l*b;
	  printf("result %f",result);
				     break;
    case 3:
	  printf("enter number");
	  scanf("%d",&r);
	  result=3.14*(r*r);
	  printf("result %f",result);
				     break;
    case 4:
	   printf("enter a value");
	   scanf("%d ",&l);
	   result=l*l;
	   printf("result %f",&l);
				    break;
   default:
   printf("enter wrong choice");
}
   getch();
   }