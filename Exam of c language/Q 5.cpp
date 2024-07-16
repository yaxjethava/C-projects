#include<stdio.h>

struct laptop{
	
	char company[50];
	char name[50];
	char procesor[50];
	float price;
};

main(){

int n;

printf("\nEnter the number of laptops : ");
scanf("%d",&n);

struct laptop no[n];

for(int i=0; i<n; i++){
	
	printf("\nEnter the details of laptop : %d\n",i+1);
	
	printf("Company name : ");
	scanf("%s",&no[i].company);
	
	printf("Laptop name : ");
	scanf("%s",&no[i].name);
	
	printf("Processor name : ");
	scanf("%s",&no[i].procesor);
	
	printf("Price : ");
	scanf("%f",&no[i].price);			
	
}


for(int i=0; i<n; i++){
	
	printf("\n\nLaptop : %d\n",i+1);
	printf("Comapany : %s\n",no[i].company);
	printf("Name : %s\n",no[i].name);
	printf("Processor : %s\n",no[i].procesor);
	printf("Price : %.2f\n",no[i].price);
	printf("\n");	
	
}
}
