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
			printf("%d\t",a[i][j]);
	if(i==j){
		lsum=lsum+a[i][j];
	}
			
	if(j==2-i){
		rsum=rsum+a[i][j];
	}		

}
printf("\n");

}	
printf("left diagonal : %d",lsum);
printf("right diagonal : %d",rsum);
}
