#include<stdio.h>
#include<conio.h>
void add(int,int);
void sub(int,int);
void mul(int,int); /*global declartion*/
void main()
 {
   void div(void);   /*local declartion*/
   void call(void);
   int x,y;
   clrscr();
   printf("enter two number");
   scanf("%d%d",&x,&y);
   add(x,y);
   sub(x,y);
   mul(x,y);
   add(x,y); /*call by value,actual arguments */
   div();
   call();
   getch();
  }
    void add(int a,int b)/*formal arguments*/
   {
    int c;
    c=a+b;
    printf("sum is %d\n",c);
   }
    void sub(int a,int b)
   {
    int c;
    c=a-b;
    printf("sub is %d\n",c);
    }
    void mul(int a,int b)
    {
     int c;
     c=a*b;
     printf("mul is %d\n",c);
    }
  void div()
  {
    int a,b,c;
    printf("enter two number");
    scanf("%d%d",&a,&b);
    c=a/b;
    printf("div is %d",c);
  }
    void call()
    {
    void add(int a,int b);
     }
