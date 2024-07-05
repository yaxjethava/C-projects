#include<stdio.h>

//function for addition
int add(int a,int b){
	
	int sum = a+b;
	return sum; 	
}
//function for substraction
int sub(int a,int b){
	
	int sum = a-b;
	return sum; 	
}
//function for multiplication
int mul(int a,int b){
	
	int sum = a*b;
	return sum; 	
}
//function for divition
int div(int a,int b){
	
	if(a==0 || b==0){
		
		printf("You are entered 0,This number is not valide for get divition\n");
		
	}else{
		
	int sum = a/b;
	return sum; 
	
	}		
}
//function for modualo
int mod(int a,int b){
	
if(a==0 || b==0){
	
	printf("You are entered 0, This number is not valide for get modualo\n");
	
} else{
	
	int sum = a%b;
	return sum;
}	
}



main(){

int choise;
int num1,num2;

//for repet calculation

for(int i=1; i<=9999;i++){


	printf("Press 1 for +\nPress 2 for -\nPress 3 for *\nPress 4 for /\nPress 5 for Modualo \nPress 0 for Exit\n");

	printf("Enter your choise : ");
	scanf("%d",&choise);

//when user press 0 ,the programme is close. otherwise programme is run 

  if(choise==0){
	
		break;
	
  }else{
  	
  		if(choise>=1 && choise<=5){
  			
  				
	printf("Enter the first number : ");
	scanf("%d",&num1);
		
	printf("Enter the second number : ");
	scanf("%d",&num2);
	
		  }

// which case is run, their function is call

	switch(choise){
	
	
	case 1 :
		
		printf("Addition of %d and %d is %d\n\n",num1,num2,add(num1,num2));
		break;
		
	case 2 :

		printf("Substraction of %d and %d is %d\n\n",num1,num2,sub(num1,num2));
		break;
		
	case 3 :
		
		printf("Multiplay of %d and %d is %d\n\n",num1,num2,mul(num1,num2));
		break;
		
	case 4 :
		
		printf("Division of %d and %d is %d\n\n",num1,num2,div(num1,num2));
		break;
		
	case 5 :
		
		printf("Modualo of %d and %d is %d\n\n",num1,num2,mod(num1,num2));
		break;	
		
	default : 
	
	printf("\nYour entered choise  number is not valide, please select number from below : \n");			


		}
	}
}

}
