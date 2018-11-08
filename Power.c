#include<stdio.h>
int main()
{int x,y,p=1,i;
printf("Enter a Power and Base");
scanf("%d %d",&x,&y);
{for(i=1;i<=y;i++)
p=p*x;
printf("Power is %d",p);
}
return 0;
}
