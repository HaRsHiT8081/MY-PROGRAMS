int sumcubes(int);
main()
{
	printf("sum is %d",sumcubes(5));
}
int sumcubes(int n)
{
	if(n==1)
	return(1);
	return(n*n*n+sumcubes(n-1));
}
