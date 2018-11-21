#include<stdio.h>
int main()
{
	char text[100],str[20],ins_text[100];
	int i=0,j=0,k=0,pos;
	printf("\nEnter The Main Text : ");
	gets(text);
	printf("\nEnter The String To Be Inserted : ");
	gets(str);
	printf("\nEnter The Postion At Which To Be Inserted : ");
	scanf("%d",&pos);
	while(text[i]!='\0')
	{
	   if(i==pos)
	   {
	   	while(str[k]!='\0')
	   	{
	   		ins_text[j]=str[k];
	   		j++;
	   		k++;
		   }
	   }
	   else
	   {
	   	ins_text[j]=text[i];
	   	j++;
	   }
	   i++;
	}
	ins_text[j]='\0';
	printf("\nThe New String is : ");
	puts(ins_text);
	return 0;
}
