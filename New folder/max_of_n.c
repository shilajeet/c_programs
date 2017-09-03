#include<stdio.h>
#include<conio.h>
void main()
{int arr[20];
int i,j,max,n;
printf("Enter array size=");
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
for(i=0;i<n;i++)
{if (i==n-1)
{max=arr[i];
goto sos;}

else{
for(j=i+1;j<n;j++)
  {if (arr[i]>arr[j])
    {if(j==n-1)
      {max=arr[i];
      goto sos;}
    else
       continue;}

else if(arr[i]<arr[j])
    break;
else if(arr[i]==arr[j])
    continue;
}}}

sos:
    printf("Maximum of array=%d",max);
getch();}
