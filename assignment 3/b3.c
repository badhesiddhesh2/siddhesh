#include<stdio.h>

void main(){ 

	int a[5], i, max, min; 
	
	printf("enter the elements in array\n");
	for(i=0;i<5;i++)
	{
	
	scanf("%d",&a[i]);
	
	}
	
	
	printf("The values in array \n");
	
	for(i=0;i<5;i++)
	{
		
		
		printf("%d\n ",a[i]);
	}
	
	max=a[0];
	for(i=0;i<5;i++)
	{
		
		if(a[i]>max)
		{
			
			max=a[i];
		
		}
	}
	
		printf("maximum number in array is :%d",max);
		
		
			min=a[0];
	for(i=0;i<5;i++)
	{
		
		if(a[i]<min)
		{
			
			min=a[i];
		
		}
	}
		printf("\n");
		printf("minimum number in array is :%d",min);
}
