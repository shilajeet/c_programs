#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,i,j;
    printf("\nEnter max no. of rows=");
    scanf("%d",&a);
    b=a;
    for(i=a;i>=1;i--)

    {for(j=1;j<=(a-i);j++)
       {printf(" ");}
    for(j=b;j>=1;j--)
    {
        printf("* ");
    }
    b=b-1;
    printf("\n");}}
