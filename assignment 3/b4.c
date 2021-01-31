#include<Stdio.h>

void main(){
	
	
	int a[5],i, j;
	
	
		
		printf("-----------------enter the elements in array-------------------------\n");

	for(i=0;i<5;i++){
	
	scanf("%d",&a[i]);
	
	}
	
	printf("---------------------The values in array before sorting------------------\n");
	
	for(i=0;i<5;i++){
		
		
		printf("%d\n ",a[i]); 
    }
    printf("---------------------array elements after sorting -----------------------\n");
    for(i=0;i<5;i++){
    	
    	for(j=i+1;j<5;j++){
    		
    		
    		if(a[i]>a[j]){
    			
    			int temp=a[i];
    			a[i]=a[j];
    			a[j]=temp;
    			
			}	
			
		}
	printf("%d\n",a[i]);
	}
}
