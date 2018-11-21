#include<stdio.h>
int main()
{
	char str[100],substr[100];
	int i=0,j=0,n,m;
	printf("\nEnter The Main String : ");
	gets(str);
	printf("\nEnter The Position From Which To Start Substring : ");
	scanf("%d",&m);
	printf("\nEnter The Length Of Substring : ");
	scanf("%d",&n);
	i=m;
	while(str[i]!='\0'&& n>0)
	{
	  substr[j]=str[i];
	  i++;	
	  j++;
	  n--;	
	}
	substr[j]='\0c';
	printf("\nThe Substring is : ");
	puts(substr);
	return 0;
}
