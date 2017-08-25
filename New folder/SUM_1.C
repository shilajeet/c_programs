#include<stdio.h>
#include<conio.h>
long int fun(int);
void main()
{int a,b,c;
double sum=0;
printf("\nEnter max term=");
scanf("%d",&b);
for(c=1;c<=b;c++)
{sum=sum+((double)c/fun(c));
}
printf("\t%f\t",sum);
getch();}

long int fun(int a)
{int i=1;
long int fac=1;
for(;i<=a;i++)
fac=fac*i;
return fac;}