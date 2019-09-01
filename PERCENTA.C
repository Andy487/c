#include<stdio.h>
#include<conio.h>
void main()
{
 int marks;
 clrscr();
 printf("enter marks");
 scanf("%d",&marks);
 if(marks>85 && marks<=100)
 printf("scored A grade");
 else
 {
 if(marks>60 && marks<=85)
 printf("first division ");
 else
 if(marks>50 && marks<=60)
 printf("second division");
 else
 if(marks>36 && marks<=50)
 printf("third division");
 else
 printf("sorry you are fail");
}
getch();
 }