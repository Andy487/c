#include<stdio.h>
#include<conio.h>
  void main()
{
  int a,b,c;
  char ch,g;
    ch='n';
  clrscr();
  printf("number");
  scanf("%d %d",&a,&b);
  printf("opration");
  scanf("%c",&g);
  scanf("%c",&ch);
  if(ch=='+')
  c=a+b;
  else
  {
   if(ch=='-')
   c=a-b;
  else
   if(ch=='*')
   c=a*b;
  else if(ch=='/')
   c=a/b;
  else
    printf("wrong");
  }
  printf("%d",c);
getch();
}

