#include<stdio.h>
main()
{
	int a[10],i,min;
	printf("\nEnter 10 Numbers : ");
	for(i=0;i<=9;i++)
	scanf("%d",&a[i]);
	min=a[0];
	for(i=1;i<=9;i++)
	if(min>a[i])
	min=a[i];
	printf("Greatest Number is %d",min);
	getch();
	
}
