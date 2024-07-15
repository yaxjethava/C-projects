#include<stdio.h>

//make a structure for getting students details

struct att{

int rn;
char fname[20];
char sname[20];
int chem;
int maths;
int phys;	
};

//make a function for get total and percentage of marks

void per(int c,int m,int p){
	
	printf("\n");
	//printting subjects marks
	
	printf("Chemistry => %d\n",c);
	printf("Mathematics => %d\n",m);
	printf("Physics => %d\n",p);
	
	//get total
	int to = c+m+p;
	printf("Total => %d/300\n",to);
	
	//get percentage
	float per = to/3.0;
	printf("Percent => %.2f\n\n",per);	
}

main(){

struct att stu[5];

//get a value of poperties by user

for(int i=0; i<5; i++){
	
	printf("\nEnter details of Student %d :\n",i+1);
	printf("Roll no => ");
	scanf("%d",&stu[i].rn);
	
	printf("First Name => ");
	scanf("%s",&stu[i].fname);
	
	printf("Second Name => ");
	scanf("%s",&stu[i].sname);
	
	printf("Chemistry => ");
	scanf("%d",&stu[i].chem);
	
	printf("Mathematics => ");
	scanf("%d",&stu[i].maths);
	
	printf("Physics => ");
	scanf("%d",&stu[i].phys);
}

//for printting output

for(int i=0; i<5; i++){
	
	printf("%s %s (%d)\n",stu[i].fname,stu[i].sname,stu[i].rn);
	
	per(stu[i].chem,stu[i].maths,stu[i].phys);// call a function
}
}
