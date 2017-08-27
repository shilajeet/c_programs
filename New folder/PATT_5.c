#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c,i,j;
    printf("\nEnter max no. of rows=");
    scanf("%d",&a);

    for(i=1;i<=a;i++)
    {
        for(j=1;j<=(a-i);j++)
        {
            printf(" ");
        }
        ;
        for(j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }


}
