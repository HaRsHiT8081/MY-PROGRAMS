#include<stdio.h>
#include<conio.h>
void main()
{int a,b;
printf("\nEnter two numbers");
scanf("%d%d",&a,&b);
a=a+b;
b=a-b;
a=a-b;
printf("a=%d b=%d",a,b);
getch();
}
