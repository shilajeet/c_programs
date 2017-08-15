#include<stdio.h>
#include<conio.h>
struct book{
char name[10];
int pages;
float prices;
};
void display(struct book);
void main()
{ struct book b1={"thomas",300,123.3};
display(b1);
getch();

}
void display(struct book k)
{printf("%s %d %f",k.name,k.pages,k.prices);}