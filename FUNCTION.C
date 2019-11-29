#include<stdio.h>
#include<conio.h>
 add()
{
 int a,b,c;
 printf("enter any two number");
 scanf("%d %d",&a,&b);
  c=a+b;
  printf("sum of number is %d",c);
 }
 sub()
 {
 int a,b,c;
 printf("enter any two number");
 scanf("%d %d",&a,&b);
 c=a-b;
 printf("sub of number is %d",c);
 }
 main()
{
  add();
  sub();
 getch();
}