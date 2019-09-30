#include<stdio.h>
#include<conio.h>
void main()
{
	   int a[50],i,n,t,l,x;
	   clrscr();
	   printf("enter number of an array\n");
	   scanf("%d",&n);
	   printf("enter element\n");
	for(i=0;i<n;i++)
	  scanf("%d",&a[i]);
	  printf("enter elements before which you want to insert\n");
	  scanf("%d",&t);
	  printf("enter the element which you want to insert");
	  scanf("%d",&x);
	for(i=0;i<n;i++)
      {
	  if(a[i]==x)
       {
	for(l=n-1;l>i;l--)
	  a[l+1]=a[l];
	  a[i]=t;
       }
	  printf("inserted succesfully\n");
	  printf("elements are as follow\n");
	for(i=0;i<n;i++)
	  printf("%d\n",a[i]);
       }
	getch();
}