#include<stdio.h>

main(){

int n; // get array size by user

printf("Enter the array's size : ");
scanf("%d",&n);

int array[n];

printf("\nEnter array's elements : \n");

// get array elements by user

for(int i=0; i<n; i++){
	
	printf("Array [%d] : ",i);
	scanf("%d",&array[i]);
	
}

//find negative value from array

printf("\nNegative elements from an array : ");

for(int i=0; i<n; i++){
	
	if(array[i]<0){
		
		printf("%d,",array[i]);
		
	}	
	
}

}
