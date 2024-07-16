#include<stdio.h>

main(){

int mark[5];
int sum;

printf("Enter the marks of the following subjest (ourt of 100) :\n");

for(int i=0; i<5; i++){
	
	printf("Subject  %d : ",i+1);
	scanf("%d",&mark[i]);
	sum+=mark[i];
}

float aev = sum/5;
printf("\nThe average is : %.2f\n",aev);

if(aev>=90){
	
	printf("Your grade id A");
	
}else if(aev>=80){
	
	printf("Your grade is B");
	
}else if(aev>=70){
	
	printf("Your grade is C");
	
}else if(aev>=60){
	
	printf("Your grade is D");
	
}else{
	
	printf("Your grade is F");
	
}
 

}
