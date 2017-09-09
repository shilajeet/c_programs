#include<stdio.h>
#include<iostream.h>
#include<math.h>
#include<conio.h>
#define F(x) (double)(pow(x,3)-20)
void main()
{double a,b,c,e;
clrscr();
cout<<"enter  lower,upper limit="<<endl;
cin>>a>>b;
while(fabs(b-a)>0.0005)
{c=(b-a)/(F(b)-F(a));
c=c*F(b);
c=b-c;
a=b;
b=c;
e=c-2.714417617;
cout<<"a="<<a<<"\t"<<"b="<<b<<"\t";
cout<<"error="<<fabs(e)<<endl; }

/*else
{a=c;
e=c-2.714417617;
cout<<"a="<<a<<"\t"<<"b="<<b<<"\t";
cout<<"error="<<fabs(e)<<endl;}}   */
getch();
}