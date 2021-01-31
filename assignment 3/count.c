#include<stdio.h>

void main()
{
	
	int count=0, num;
	
	printf("enter any number\n");
	
	scanf("%d",&num);
	
	while(num!=0)
	{
		
		num=num/10;
		
		count++;
	}
	
	printf("number of digits in th number :%d",count);
}
