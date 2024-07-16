#include<stdio.h>

void odd(int *r){
	
	int array[*r];
	
	printf("\nEnter array elements : \n");
	for(int i=0; i<*r; i++){
		
		printf("Array[%d] : ",i);
		scanf("%d",&array[i]);
		
	}
	
	printf("\nEven number : \n");
	for(int i=0; i<*r; i++){
		
		if(array[i] % 2 ==0){
			
			printf("%d\n",array[i]);
			
		}
	}
	
}


main(){

int n;
printf("Enter The size of Array : ");
scanf("%d",&n);

odd(&n);

}
