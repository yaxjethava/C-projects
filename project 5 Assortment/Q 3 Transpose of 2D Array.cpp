#include<stdio.h>

main(){

int n;

printf("Enter the row's and column size : ");
scanf("%d",&n);

int array[n][n];

printf("Enetr the elements of an array : \n");
for(int i=0; i<n; i++){
	for(int j=0; j<n; j++){
		
		printf("Array [%d][%d] =",i,j);
		scanf("%d",&array[i][j]);
		
	}
}

printf("\nThe transpose matrix of an array :\n");

for(int i=0; i<n; i++){
	for(int j=0; j<n; j++){
		
		printf("%d",array[j][i]);
		
		
	}
	printf("\n");
}
}
