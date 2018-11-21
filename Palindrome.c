#include<stdio.h>
int main()
{
	char str[100];
	int i=0,j,length=0;
	printf("\nEnter A String : ");
	gets(str);
	while(str[i]!='\0')
	{
		length++;
		i++;
	}
	i=0;
	j=length-1;
	while(i<=length/2)
	{
		if(str[i]==str[j])
		{
			i++;
			j--;
		}
		else
		break;
	}
	if(i>=j)
	printf("\nPALINDROME");
	else
	printf("NOT PALINDROME");
	return 0;
}
