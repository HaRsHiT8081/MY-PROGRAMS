#include<stdio.h>
int main()
{
	char str[1000];
	int i=0,word_count=1,line_count=1,char_count=1;
	printf("Enter a '*' to End ");
	printf("\n***********************");
	printf("\nEnter the Text : ");
	scanf("%c",&str[i]);
	while(str[i]!='*')
	{
		i++;
		scanf("%c",&str[i]);
	}
	str[i]='\0';
	i=0;
	while(str[i]!='\0')
	{
		if(str[i]=='\n'|| i==79)
		line_count++;
		if(str[i]==' '&&str[i+1]!=' ')
		word_count++;
		char_count++;
		i++;
	}
	printf("\nThe Total count of words is %d",word_count);
		printf("\nThe Total count of lines is %d",line_count);
			printf("\nThe Total count of characters is %d",char_count);
			return 0;
}
