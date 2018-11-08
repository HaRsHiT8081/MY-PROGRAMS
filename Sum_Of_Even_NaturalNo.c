#include<stdio.h>
int main()
{int x,i,s=0;
printf("Enter a Natural no");
scanf("%d",&x);
{for(i=0;i<=x;i++)
s=s+(2*i);
printf("Sum of even natural no is %d",s);
}
return 0;
}
