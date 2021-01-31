#include<stdio.h>

void main()
{
	int a[]={1,2,3,4,5};
	int i;
	int length=sizeof(a)/sizeof(a[0]);
	
	printf("size of array : %d\n\n",length);
	
	printf("Array in the orignal format\n");
	for(i=0;i<length;i++)
		{
			printf("%d\t",a[i]);
		}
		
	printf("\nArray in reverse format\n");
		for(i=length-1;i>=0;i--)
		{
			printf("%d\t",a[i]);
			}	
	
}
