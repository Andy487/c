#include<stdio.h>
#include<conio.h>
#include<process.h>
  void main()
 {
     int count=0;
     char ch;
     FILE *fp;
      clrscr();
      fp=fopen("hmhh.txt","w");
   if(fp==NULL)
   {
       printf("file cannot open");
       exit(0);
  }
    printf("enter char\n");
    while((ch=getche())!='1')
   {
	fputc(ch,fp);
   }
   fclose(fp);
   fp=fopen("hmhh.txt","r");
     printf("entered text is as follows\n");
   while((ch=fgetc(fp))!=EOF)
   {
     count++;
     putch(ch);
   }
   fclose(fp);
     printf("total no of char %d\n",count);
  getch();
 }
