void print(int n);
main()
{
	print(5);
}
void print(int n)
{
	if(n>=1)
	{
		printf(" %d",n);
		print(n-1);
	}
}
