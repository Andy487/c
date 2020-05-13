#include<stdio.h>
#include<conio.h>
#define MAXCHAR 10000
  void main()
  {
      FILE *fp, *ftpr;
      char  ch,str[MAXCHAR];

      char *filename="c:\\Book1.xlsx";
      clrscr();
      ftpr=fopen("my.csv","w");
      if(ftpr==NULL)
      {
      printf("my file error");
      exit(0);
      }
      printf("i am going to copy file");
      fp=fopen(filename,"a+");
      if(fp==NULL)
       {
	 printf("could not open");
	 exit(0);
	 }


    //  while(fgets(str,MAXCHAR,fp)!=NULL)
     //	while(1)

      //	{
	ch=fgetc(fp);
	 printf("i am in loop %c",ch);
	// if(ch==EOF)
       //	 break;   */
	 fputc(ch,ftpr);
       //	 fprintf(ftpr,"%c",ch);
	// }
	 fclose(fp);
	 fclose(ftpr);
	 getch();
   }
