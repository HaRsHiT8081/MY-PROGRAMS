#include<stdio.h>
int main()
{
	char a[100],b[100];
	printf("enter a string : ");
	gets(a);
	printf("enter a string : ");
	gets(b);
	if(strcmp(a,b)==0)
	printf("The strings are equal\n");
	else
	printf("strings are not equal\n");
	return 0;
}
