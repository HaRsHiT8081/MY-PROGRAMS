int fib(int n)
{ if(n==1||n==2)
	return(1);
	return(fib(n-1)+fib(n-2));
}
main()
{ printf("6th term is %d",fib(6));
	return 0;
}
