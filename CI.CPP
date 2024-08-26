#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
clrscr();
int p,r,t,CI;
printf("enter principle (amount):\n");
scanf("%f",&p);
printf("enter time:\n");
scanf("%f",&t);
printf("enter rate of intrest:\n");
scanf("%f",&r);
CI=p*(pow((1+r/100),t));
printf("compound intrest=%f",CI);
getch();
}
