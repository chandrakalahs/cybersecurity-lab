#include<stdio.h>
#include<conio.h>
int main()
{
clrscr();
int a,b,c;
printf("Enter three numbers;");
scanf("%d%d%d",&a,&b,&c);
if(a>=b&&a>=c)
printf("%d is the largest number.",a);
else if(b>=a&&b>=c)
printf("%d is the largest number.",b);
else
printf("%d is the largest number.",c);
getch();
}