#include<stdio.h>
#include<conio.h>
#include<process.h>
void main()
  {
     FILE *fp;
     clrscr();
     char s[100];
     fp=fopen("monika.txt","w");
     if(fp==NULL)
     {
       printf("file cannot open");
       exit(0);
     }
     printf("Enter your name");
     gets(s);
     while(strlen(s)!=0)
     {
	 fputs(s,fp);
	 printf("enter the string\n");
	 gets(s);
     }
      fclose(fp);

  getch();
  }
