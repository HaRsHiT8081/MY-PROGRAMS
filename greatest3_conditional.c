#include<stdio.h>
#include<conio.h>
void main()
{int x,y,z,k;
printf("Enter three numbers");
scanf("%d%d%d",&x,&y,&z);
if(x>y)
{k=x>z?x:z;
}
else
{k=y>z?y:z;
}
printf("greater number is %d",k);
getch();
}
