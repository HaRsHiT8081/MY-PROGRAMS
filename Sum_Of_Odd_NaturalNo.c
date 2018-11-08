#include<stdio.h>
int main()
{int x,i,s=0;
printf("Enter a Natural no");
scanf("%d",&x);
{for(i=0;i<=x;i++)
s=s+(2*i)-1;
printf("Sum of Odd Natural No is %d",s);
}
return 0;
}
