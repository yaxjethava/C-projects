#include<stdio.h>

// code of grade calculation

main(){

int score;
char grade;

printf("Enter your score : ");
scanf("%d",&score);

// For cheak a grade and assing grade value in character

if(score>=85 && score<=100){
	
	printf("Your grade is A.");
	grade='A';

}else if(score>=70 && score<=85){
	
	printf("Your grade is B.");
	grade='B';
	
}else if(score>=55 && score<=70){
	
	printf("Your grade is C.");
	grade='C';
	
}else if(score>=40 && score<=55){
	
	printf("Your grade is D.");
	grade='D';
	
}else{
	
	printf("Your grade is F.");
	grade='F';
	
}

// provide additional comments based on the grade using a switch-case 

switch(grade){
	
	case 'A' :
		printf("Excellent work !");
		
		break;
	
	case 'B' :
		printf(" Well done");
		
		break;
	
	case 'C' :
		printf(" Good job");
		
		break;
	
	case 'D' :
		printf(" You passed, but you could do better");
		
		break;
	
	case 'F' :
		printf(" Sorry, you failed");
		
		break;
							
}


}
