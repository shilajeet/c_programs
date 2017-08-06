#include<stdio.h>
#include<conio.h>
void main()
{ int i,j;
int arr[3][5]={{1,2,3,4},{5,6,7},{1,2,3,4,5}};
int *berry[3];
int arr1[]={1,2,3,4,5};
int arr2[]={4,5,6,7,8};

berry[0]=arr1;
berry[2]=arr2;
for(i=0;i<3;i++)
{for(j=0;j<5;j++)
{berry[1]=&arr[i][0];
printf(" %d ",*(berry[1]+j));}
printf("\n");}
getch();}