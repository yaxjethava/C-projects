#include<stdio.h>
#include<string.h>

main(){

char num[99];

printf("Enter any number : ");
scanf("%s",&num);

int len = strlen(num);
printf("Total number of digits: %d",len);
}
