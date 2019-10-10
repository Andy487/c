#include<stdio.h>
#include<conio.h>
  void main()
  {
  int s,r,l=1,k;
  char ch='A',z='Z';
  clrscr();
  for(r=1;r<=3;r++)
  {
     for(s=1;s<=3-r;s++)
       printf(" ");
     /*if(r%2!=0)
	t=ch;
     else
	t=z;
     */
     for(k=1;k<=2*r-1;k++)
     {
       if(l%2!=0)
       {
	 printf("%c",ch++);

	}
     else
     {
	 printf("%c",z--);

     }
	 l++;
      } printf("\n");
  }
  for(r=3;r>=1;r--)
  {
     for(s=1;s<=3-r;s++)
       printf(" ");
     // if(r%2!=0)
      //	t=ch;
    // else
     //	t=z;

     for(k=1;k<=2*r-1;k++)
     {
       if(l%2!=0)
       {
	 printf("%c",ch++);

	}
     else
     {
	 printf("%c",z--);

     }
	 l++;
      } printf("\n");
  }
   getch();
}
