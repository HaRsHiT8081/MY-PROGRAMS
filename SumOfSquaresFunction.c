#include<stdio.h>
void sum1(void);
main()
{
  sum1();
}
void sum1()
{ int i,n,s=0;
	printf("\nEnter a Number : ");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		s=s+i*i;
	}
	printf("Sum of Sqaures is %d",s);
}

