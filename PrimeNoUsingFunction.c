#include<stdio.h>
main()
{int x,i;;
printf("\Enter a Number : ");
scanf("%d",&x);
for(i=2;i<=(x-1);i=nextprime(i)){
	if(isprime(x-1))
	printf("%d +%d =%d\n",i,x-i,x);
}
}
int nextprime(int n)
{
	do
	n++;
	while(!isprime(n));
	return(n);
}
int isprime(int n)
{
	int i;
	for(i=2;i<n;i++)
	if(n%2==0)
	return(0);
return(1);
}
