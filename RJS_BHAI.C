#include<stdio.h>
#include<conio.h>
#include<process.h>
  void main()
{
  int i=0,m;
  FILE *fp;
  clrscr();
  fp=fopen("Rjs.txt","w+");
  if(fp==NULL)
  {
      printf("file cannot open");
      exit(0);
  }
      printf("enter your mobile number\n");
  for(i=0;i<=9;i++)
    {
      scanf("%d",&m);
      fprintf(fp,"%d",m);
    }
    fclose(fp);
 getch();
}
