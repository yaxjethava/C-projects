#include<stdio.h>

main(){

int len,i,j,result = 0;
char str[99]; char revstr[99];

//for get a string

printf("Enter your string : ");
gets(str);

//for get length of string

for(i=0; str[i] != '\0'; i++){
	
	len++;	
}

//for assing reversed characters in new string

for(i=len-1, j=0; i>=0,j<len ; i--, j++){
	
		revstr[j]=str[i];
}

//compair both string

for(int i=0; i<len; i++){
	
	if(str[i] != revstr[i]){
		
		result=1;
	}	
}


if(result != 1){
	
	printf("The given string is Palindrome.");
}else{
	
	printf("This given string is not Palindrome.");
}

}
