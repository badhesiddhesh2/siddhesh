#include<stdio.h>

void main()
{
	
	
	int a[3][3] ,j, i, lsum=0,rsum=0;
	
	printf("enter the value in arrya \n");
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
	
		}
	}	
	printf("display the matrix\n");
		for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			rsum=rsum+a[i][j];
			printf("%d\t",a[i][j]);

		
	}		
printf("%d\n",rsum);
}
//printf("\n");

}	
//printf("left diagonal : %

