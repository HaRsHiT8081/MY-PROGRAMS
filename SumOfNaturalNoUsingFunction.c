#include<stdio.h>
void sum1(void);
void sum2(int);
int sum3(void);
int sum4(int);
main()
{   int k;
	k=sum3();
	printf("sum is %d",k);
}

void sum1()
{ int i,n,s=0;
  printf("enter a number : ");
  scanf("%d",&n);
  for(i=0;i<=n;i++)
  {
  	s=s+i;
  }
  	printf("Sum is %d",s);
	  	
}
void sum2(int n)
{ int i,s=0;
	 for(i=0;i<=n;i++)
	 {
	 s=s+i;}
	 printf("Sum is %d",s);
}
int sum3()
{ int i,n,s=0;
	printf("enter a number : ");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
	s=s+i;}
	return(s);	
}
int sum4(int n)
{ int i,s=0;
for(i=0;i<=n;i++)
{ s=s+i;
}
return(s);
}

