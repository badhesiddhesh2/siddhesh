#include<stdio.h>

void main()
{
	
	
	int a[3][3], b[3][3], c[3][3], i, j;
	
	printf("enter the first matrix\n");
	
		for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
	
		}
	}	
	
	printf("enter the values in second matrix\n ");
	
		for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&b[i][j]);
	
		}
	}	
	
	
	printf("perform the matrix addition\n");
		for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{	
		
		
			c[i][j]=a[i][j]*b[i][j];
			printf("%d \t",c[i][j]);
		}
		printf("\n");
	}	
	
	
	
	
	
	}
