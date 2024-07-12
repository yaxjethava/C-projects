#include<stdio.h>
#include<string.h>

main(){
	
int count;

char str[30];
printf("Enter any string : ");
gets(str);

int len = strlen(str);

printf("%d\n",len);

printf("Frequency of each letter : \n");

for(int i=0; i<len; i++){
	for(int j=0; j<len; j++){
		
		if(str[i]==str[j]){
			
			count++;
		}
		
	}
	printf("%c => %d\n",str[i],count);
	count=0;
}

}
