#include<stdio.h>
#include<conio.h>
void age(int,int,int,int,int,int);
void main()
{int d1,d2,m1,m2,y1,y2; clrscr();
printf("\nEnter current day=");
scanf("%d",&d1);
printf("\nEnter birth day=");
scanf("%d",&d2);
printf("\nEnter current month=");
scanf("%d",&m1);
printf("\nEnter birth month=");
scanf("%d",&m2);
printf("\nEnter current year=");
scanf("%d",&y1);
printf("\nEnter birth year=");
scanf("%d",&y2);
age(d1,d2,m1,m2,y1,y2);
if((y2%4==0&&y2%100!=0)||(y2%400==0))
printf("\nBirth year is leap year");
else
printf("\nBirth year is not leap year");
getch();}
void age(int d1,int d2,int m1,int m2,int y1,int y2)
{int d3,m3,y3;
if(d2>d1)
{m1=m1-1;d1=d1+30;}
if(m2>m1)
{y1=y1-1;m1=m1+12;}
if(y2>y1)
{printf("\nInvalid year");}
m3=m1-m2;d3=d1-d2;y3=y1-y2;
printf("\nAGE=%d/%d/%d",d3,m3,y3);}

