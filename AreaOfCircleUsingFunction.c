#include<stdio.h>
int area(int);
main()
{ int r,x;
printf("\nEnter Radius Of Circle : "); 
scanf("%d",&r);
x=area(r);
printf("Area of Circle is %d",x);
getch();	
}
int area(int r)
{ int a;	
 a=3.14*r*r;
 return(a);	
}
