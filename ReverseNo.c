#include<stdio.h>
int main()
{int x,a,r=0;
printf("\nEnter a Number ");
scanf("%d",&x);
while(x!=0)
{a=x%10;
r=r*10+a;
x=x/10;}
printf("\nReverse Number=%d",r);
return 0;
}
