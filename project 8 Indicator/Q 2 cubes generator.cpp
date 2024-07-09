#include<stdio.h>

// make function for calculation of cube
int cube(int *a){
	
	return (*a)*(*a)*(*a);

}


main(){

int n; 	//take a size of 2d array 
printf("Enetr arrays size :");
scanf("%d",&n);

int arr[n][n];

//take elements of an arry
printf("\nEnter array elements : \n");

for(int i=0; i<n; i++){
	for(int j=0; j<n; j++){
			
	printf("Arary[%d][%d] = ",i,j);
	scanf("%d",&arr[i][j]);
	
}
	}
	
//get a cude of every elements in 2D array by calling cube function
	
printf("\nCubes of all elements : \n");	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			
			printf("%d ",cube(&arr[i][j]));
		}
	printf("\n");
	}
}


