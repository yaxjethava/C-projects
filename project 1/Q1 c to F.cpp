#include<stdio.h>

main(){

float celsius;

printf("The temperature in Celsius: ");
scanf("%f",&celsius);

float Fahrenheit = (celsius*9/5)+32;

printf("The temperature in Fahrenheit : %.2f F",Fahrenheit);

}
