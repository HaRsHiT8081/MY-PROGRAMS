main(int argc,char *argv[])
{
	int a;
	a=string_to_int(argv[1]);
	printf("a=%d",a);
	return 0;
}
int string_to_int(char *str)
{
	int i,x;
	for(x=0,i=0;str[i];i++)
	{
		if(str[i]>='0'&&str[i]<='9')
		x=x*10+(str[i]-48);
		else
		break;
	}
     return(x);
}
