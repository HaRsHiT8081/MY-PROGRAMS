#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char s[20];
	printf("Enter A String : ");
	gets(s);
	strrev(s);
	printf("%s",s);
	getch();
}
