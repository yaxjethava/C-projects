#include<stdio.h>

main(){

int r,c; //take a row and column size by user

printf("Enter the array's row size : ");
scanf("%d",&r);

printf("Enter the array's column size : ");
scanf("%d",&c);

//get array value by user 

int array[r][c];
printf("\nEnter array's elements : \n");

for(int i=0; i<r; i++){
	for(int j=0; j<c; j++){
		
		printf("Array[%d][%d] = ",i,j);
		scanf("%d",&array[i][j]);
		
	}
}

int rown,coln,rsum=0,csum=0;


//for row calculation

printf("\nEnter row number : ");
scanf("%d",&rown);

printf("Elements of row %d : ",rown);  //get row number from user

for(int j=0; j<c; j++){
	
	printf("%d,",array[rown][j]);
	
	rsum += array[rown][j];	
}
	printf("\nThe sum of a row %d : %d",rown,rsum);
	

//for column calculation	
printf("\n\nEnter column number : ");
scanf("%d",&coln);

printf("Elements of column %d : ",coln);  //get column number by user

for(int i=0; i<r; i++){

	printf("%d,",array[i][coln]);

	csum += array[i][coln];	
}		
	printf("\nThe sum of column %d : %d",coln,csum);


}
