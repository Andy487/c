#include<iostream.h>
#include<conio.h>
 class student
  {
    private:
	    int m1,m2,m3;
	    float marks,per;
    public:
	 student()
	  {
	     cout<<"no argument"<<endl;    //default argument
	     m1=0;
	     m2=0;
	     m3=0;
	   }
	  student(int a,int b,int c)
	  {
	    cout<<"we are in parameterized constructor"<<endl;	   //parameterized constructor
	    m1=a;
	    m2=b;
	    m3=c;
	   marks=m1+m2+m3;
	   }
	   void read()
	   {
	      cout<<"enter the 3 marks"<<endl;
	      cin>>m1>>m2>>m3;
	   }
	 void calculate()
	  {
	    per=(marks)/300*100;
	   }
	 void show()
	 {
	   cout<<marks<<endl;
	   cout<<"per is="<<per<<endl;
	 }
     };
     void main()
       {
	 clrscr();
	 student b1(45,45,45),b2,b3;
	 b3.read();
	 b1.calculate();
	 b1.show();
	 b2.show();
	 b3.calculate();
	 b3.show();
       getch();
     }



















































































































































































































