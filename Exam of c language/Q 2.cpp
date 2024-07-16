#include<stdio.h>

void aev(){
	
	int r,c,sum;
	float cal;
	
	printf("Enter the size of row : ");
	scanf("%d",&r);
	
	printf("Enter the size of column : ");
	scanf("%d",&c);
	
	int array[r][c];
	
	printf("\nEnter the value in array : \n");
	for(int i=0; i<r; i++){
		for(int j=0; j<c; j++){
			
			printf("Array[%d][%d] : ",i,r);
			scanf("%d",&array[i][r]);
			sum += array[i][r];
		}
	}
	
	cal = sum/(r*c);
	
	printf("\nThe average of 2D array : %.2f",cal);
}

main(){

aev();

}
