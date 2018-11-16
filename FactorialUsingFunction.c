#include<stdio.h>
int fact(int);
main()
{ int x,n;
printf("\nEnter a Number : ");
scanf("%d",&n);
x=fact(n);
printf("Factorial is %d",x);
getch();
}
int fact(int n)
{ int i,f=1;
  for(i=1;i<=n;i++)
	f=f*i;
	return(f);
}
