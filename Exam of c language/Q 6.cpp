#include<stdio.h>

struct market{
	
	char name[20];
	char color[20];
	
};

main(){

int n;
printf("Enter the numbers of fruit's : ");
scanf("%d",&n);

struct market no[n];

FILE *ptr = NULL;
ptr = fopen("data.txt","w");

for(int i =0; i<n; i++){
	
	printf("fruit name : ");
	scanf("%s",no[i].name);
	
	printf("fruit color : ");
	scanf("%s",no[i].color);	
	
	printf("\n");
}

for(int i=0; i<n; i++){
	
	fprintf(ptr,"Fruit name : %s \nFruit color : %s\n\n",no[i].name,no[i].color);
	
}

fclose(ptr);

}
