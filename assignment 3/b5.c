#include<Stdio.h>

void main(){
	int a[6]={20,13,50,60,34};
	int i, j;
	
	int swap,value;
	printf("enter the value of position\n");
	scanf("%d",&i);
		printf("enter the value \n");
		scanf("%d",&value);
	   
		for(j=i;j<6;j++)
		{
		 swap=a[j];
		 a[j]=value;
		 value=swap;
	}
	for(j=0;j<6;j++){
	
		printf("%d\n",a[j]);
	}
	
}
