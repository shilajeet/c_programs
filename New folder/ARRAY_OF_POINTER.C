#include<stdio.h>
#include<conio.h>
void main()
{int  *(arr[4]);
int i,j;
int a[]={1,2,3,4};
int b[]={4,8};
int c[]={10,1001,10};
int d[]={10,1010,1020,1030};
clrscr();
arr[0]=a;
arr[1]=b;
arr[2]=c;
arr[3]=d;
for(i=0;i<4;i++)
{for(j=0;j<4;j++)
{printf(" %d ",*(*(arr+i)+j));
}
printf("\n");
}
getch();}
