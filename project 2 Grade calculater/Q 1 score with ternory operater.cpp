#include<stdio.h>

// code of grade calculation

main(){

int score;

printf("Enter your score : ");
scanf("%d",&score);

// For cheak a grade 

if(score>=85 && score<=100){
	
	printf("Your grade is A.");

}else if(score>=70 && score<=85){
	
	printf("Your grade is B.");
	
}else if(score>=55 && score<=70){
	
	printf("Your grade is C.");
	
}else if(score>=40 && score<=55){
	
	printf("Your grade is D.");
	
}else{
	
	printf("Your grade is F.");
	
}


}
