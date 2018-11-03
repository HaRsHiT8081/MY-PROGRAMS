#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{int a,b,c,D;
float x,y;
printf("Enter cofficient of x^2,x,and constant term");
scanf("%d%d%d",&a,&b,&c);
D=b*b-4*a*c;
if(D<0)
printf("Roots are imaginary");
if(D==0)
{printf("roots are equal");
x=-b/(2.0*a);
printf("root are %f",x);
}
if(D>0)
{printf("\nRoots are real and distinct");
x=(-b+sqrt(D))/(2*a);
y=(-b-sqrt(D))/(2*a);
printf("\nroots are %f %f",x,y);
}
getch();
}
