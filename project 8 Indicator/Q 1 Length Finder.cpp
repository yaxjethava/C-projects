#include<stdio.h>

main(){

int count;
char str[99];
printf("Enter any string : ");
scanf("%[^\n]s",&str);

for(int i=0; str[i] != NULL; i++){

count++;
	
}

int *len = &count;
printf("The lenghth of a string : %d",*len);
}
