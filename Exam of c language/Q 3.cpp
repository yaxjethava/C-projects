#include<stdio.h>

void odd(int x){
	
	int array[x];
	printf("Enter array Elements : \n");
	
	for(int i=0; i<x; i++){
		printf("Array [%d] : ",i+1);
		scanf("%d",&array[i]);	
	}
	
	printf("\nThe odd number are : \n");
	for(int i=0; i<x; i++){
		
		if(array[i]%2 != 0){
			
			printf("%d\n",array[i]);
		}
		
	}
}


main(){

int n;
printf("Enter the size of array : ");
scanf("%d",&n);

odd(n);
}
