#include<stdio.h>

void main(){
	
	
	int a[5], i, sum=0;
	
	
		printf("enter the elements in array\n");

	for(i=0;i<5;i++){
	
	scanf("%d",&a[i]);
	
	}
	
	printf("The values in array \n");
	
	for(i=0;i<5;i++){
		
		
		printf("%d\n ",a[i]);
		sum=sum+a[i];
	}
	
	printf("the sum of the array elements is : %d",sum);
} 

