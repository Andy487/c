/*take something retuens something*/
#include<stdio.h>
#include<conio.h>
int sub();
int add(int ,int); /*global declartion*/
int mul(int,int);
void call(void);
 void main()
 {
   int x,y,s;
   printf("enter any two number");
   scanf("%d %d",&x,&y);
   s=add(x,y);/*call by value */
   printf("sum is%d",s);
   s=sub();
   printf("sub is %d",s);
   s=mul(x,y);
   printf("mul is %d",s);
   call();
   printf("call is %d",s);
   getch();
 }
 int add(int a,int b)/*formal arguments*/
  {
   int c;
   return (a+b);
  }
 int sub()
 {
   int x,y,c;
   printf("enter two number");
   scanf("%d%d",&x,&y);
   return(x-y);
   }
  int mul(int a,int b)
  {
    int c;
    return(a*b);
   }
  void call()
  {
   sub();
   }
