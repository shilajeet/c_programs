#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,i,j,k;
    clrscr();
    printf("\nEnter max no. of rows=");
    scanf("%d",&a);
    b=a;
    for(i=1;i<=a;i++)
    {   for(k=0;k<=(a-b);k++)
	{printf("   ");}
        for(j=b;j>=1;j--)
        {
	    printf("*  ");

        }
        b=b-1;
        printf("\n");
    }
    getch();
}
