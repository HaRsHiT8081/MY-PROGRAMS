main(int argc,char *argv[])
{ 
  int n,f=1;
  n=string_to_input(argv[1]);
  while(n>0)
  {
  	f=f*n;
  	n--;
  }
  printf("Factorial is %d",f);
	return 0;
}
int string_to_int(char *str)
{
	int i,x;
	for(x=0,i=0;str[i];i++)
	{
		if(i==0&&str[i]=='-')
		i++;
		if(str[i]>='0'&&str[i]<='9')
		{
			x=x*10+(str[i]-48);
		}
		else
		break;
	}
	if(str[0]=='-')
	x=-x;
	return(x);	
}
