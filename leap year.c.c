#include<stdio.h>
#include<conio.h>
void main()
{int year;
printf("Enter a year");
scanf("%d",&year);
if(year%4)
printf("Not a leap year");
else if(year%100)
printf("Leap year");
else if(year%400)
printf("Not a leap year");
else
printf("Leap year");
getch();
}
