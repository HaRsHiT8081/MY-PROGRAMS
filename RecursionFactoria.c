#include<stdio.h>
int fact(int n)
{ if(n>0)
return(n*fact(n-1));
else
return(1);
}
main()
{ printf("Factorial of 5 is %d",fact(5));
	return 0;	
}

