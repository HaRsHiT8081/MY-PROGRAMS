#include<stdio.h>
#include<conio.h>
void main()
{int a,b,c;
printf("\nEnter two numbers");
scanf("%d%d",&a,&b);
c=a;
a=b;
b=c;
printf("\na=%d b=%d",a,b);
getch();
}
