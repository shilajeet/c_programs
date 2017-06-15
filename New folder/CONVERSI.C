#include<stdio.h>
#include<conio.h>
void main()
{long int b,n,q1,q2,q3,q4,q5,q6,q7,j,i,n2,d1,d2,d3,d4,d5,d6,r1,r2,r3,base1;
long int base2,base3,k,l,d7,d8,base4,r4;
long int arr1[100];char str[100]; clrscr();
printf("\nEnter k=");scanf("%ld",&k);
if(k==0)
{printf("\nEnter a number=");
scanf("%ld",&n);n2=n;}
else
{printf("\nEnter a number=");
scanf("%s",str);
l=strlen(str);}
printf("\nEnter base of the number=");
scanf("%ld",&b);
switch(b)
{case 10:
for(i=0;q1!=0;i++)
{arr1[i]=n%2;q1=n/2;n=q1;}
printf("\nBinary form of no. is=");
for(j=i-1;j>=0;j--)
{printf("%ld",arr1[j]);} n=n2;
for(i=0;q2!=0;i++)
{arr1[i]=n%16;q2=n/16;n=q2;
if(arr1[i]<10)
arr1[i]=arr1[i]+48;
else
arr1[i]=arr1[i]+55;}
printf("\nHex form of no. is=");
for(j=i-1;j>=0;j--)
{printf("%c",arr1[j]);} n=n2;
for(i=0;q3!=0;i++)
{arr1[i]=n%8;q3=n/8;n=q3;}
printf("\nOctal form of no. is=");
for(j=i-1;j>=0;j--)
{printf("%ld",arr1[j]);}break;
case 2:
printf("\nEntered no. is binary.");
n=n2;
for(d1=0,base1=1;n>0;)
{r1=n%10;d1=d1+r1*base1;base1=base1*2;n=n/10;}
printf("\nDec form of no.=%ld",d1);d2=d1;
for(i=0;q4!=0;i++)
{arr1[i]=d1%16;q4=d1/16;d1=q4;
if(arr1[i]<10)
arr1[i]=arr1[i]+48;
else
arr1[i]=arr1[i]+55;}
printf("\nHex form of no. is=");
for(j=i-1;j>=0;j--)
{printf("%c",arr1[j]);}
for(i=0;q5!=0;i++)
{arr1[i]=d2%8;q5=d2/8;d2=q5;}
printf("\nOctal form of no. is=");
for(j=i-1;j>=0;j--)
{printf("%ld",arr1[j]);}break;
case 8:
n=n2;
printf("\nEntered no. is octal.");
for(d3=0,base2=1;n>0;)
{r2=n%10;d3=d3+r2*base2;base2=base2*8;n=n/10;}
printf("\nDec form of no.=%ld",d3);d4=d3;
for(i=0;q6!=0;i++)
{arr1[i]=d3%2;q6=d3/2;d3=q6;}
printf("\nBinary form of no. is=");
for(j=i-1;j>=0;j--)
{printf("%ld",arr1[j]);} n=n2;d3=d4;
for(i=0;q7!=0;i++)
{arr1[i]=d3%16;q7=d3/16;d3=q7;
if(arr1[i]<10)
arr1[i]=arr1[i]+48;
else
arr1[i]=arr1[i]+55;}
printf("\nHex form of no. is=");
for(j=i-1;j>=0;j--)
{printf("%c",arr1[j]);}
break;
case 16:
printf("\nEntered no. is hex.");
n=n2;
for(i=0;i<l;i++)
{if(str[i]>=10)
  str[i]=str[i]-55;
else
str[i]=str[i]-48;}
for(d7=0,base4=1,i=0;i<l;i++)
{d7=d7+str[i]*base4;base4=base4*16;}
printf("\ndecimal form of no. is=%ld",d7);}
getch();}


