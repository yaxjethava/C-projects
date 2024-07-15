#include<stdio.h>

main(){

FILE *eptr = NULL;
FILE *optr = NULL;

eptr = fopen("evennum.txt","w");
optr = fopen("oddnum.txt","w");


for(int i=50; i<=70; i++){
	
	if(i%2==0){
		
		fprintf(eptr,"%d\n",i);
		
	}else{
		
		fprintf(optr,"%d\n",i);
		
	}
}
}
