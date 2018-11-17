int square(int n);
main()
{
	int x;
	printf("enter a number : ");
	scanf("%d",&x);
	printf("sum of squares is %d",square(x));
}
int square(int n)
{
	if(n/10==0)
	return(n*n);
	return((n%10) * (n%10) +square(n/10));
}
