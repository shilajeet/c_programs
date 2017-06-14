#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{float a,b,c,D,r1,r2,real,img;
printf("\nEnter values of a,b,c=");
scanf("%f%f%f",&a,&b,&c);
D=b*b-4*a*c;
if(D>0)
{printf("\nRoots are real and distinct");
r1=(-b+sqrt(D))/(2*a);
r2=(-b-sqrt(D))/(2*a);
printf("\nr1=%f r2=%f",r1,r2);}
else if(D==0)
{printf("\nRoots are real and equal");
r1=r2=(-b)/(2*a);
printf("\nr1=r2=%f",r2);}
else if(D<0)
{printf("\nroots are imaginary");
real=(-b)/(2*a);img=sqrt(abs(D))/(2*a);
printf("\nr1=%f+i%f\tr2=%f-i%f",real,img,real,img);}
getch();}

