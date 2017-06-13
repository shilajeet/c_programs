#include<stdio.h>
#include<conio.h>
void main()
{int arr[100],i,j,max,n;
clrscr();
printf("\nEnter value of n=");
scanf("%d",&n);
printf("\nEnter integer array=");
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
for(i=0;i<n;i++)
{   for(j=0;j<n;j++){
  if(arr[i]>arr[j]){
if(j==n-1)
    {max=arr[i];
    goto sos;}
else
continue;}
else if(arr[i]<arr[j])
break;
else if (arr[i]==arr[j])
{j=j+1;
continue;}}     }
sos:
printf("\nMax=%d",max);
getch();}