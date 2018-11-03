#include<stdio.h>
#include<conio.h>
void main()
{int x,y,z;
printf("Enter three numbers");
scanf("%d%d%d",&x,&y,&z);
if(x>y&&x>z)
printf("%d is greatest number",x);
else
{if(y>z)
printf("%d is greatest number",y);
else
printf("%d is greatest number",z);
}
getch();
}
