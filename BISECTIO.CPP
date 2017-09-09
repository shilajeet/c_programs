#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<math.h>
#define F(x) (pow(x,3)-9)
void main()
{clrscr();
double a,b,c;
cout<<"Enter lower limit,upper limit=";
cin>>a>>b;
while((b-a)>0.001)
{if (F(a)*F(b)<0)
{c=(a+b)/2;
if (F(c)*F(a)<0)
{b=c;
cout<<"a="<<a<<"b="<<"\t"<<b<<endl;

}
else
{a=c;
cout<<"a="<<a<<"b="<<"\t"<<b<<endl; }
}}
getch();}