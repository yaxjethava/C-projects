#include<stdio.h>

main(){

int salary;
float HRA,DA,TA;

printf("Enter your salary : ");
scanf("%d",&salary);

//sometimes percentage in float value

printf("Enter your HRA percentage: ");
scanf("%f",&HRA);

printf("Enter your DA percentage: ");
scanf("%f",&DA);

printf("Enter your TA percentage : ");
scanf("%f",&TA);

//calculation of given value

float total= salary+(salary*HRA/100)+(salary*DA/100)+(salary*TA/100);

printf("Gross Salary : Rs. %f",total);
}
