#include<stdio.h>
void main(){
	
	int i,x,num,j;
	printf("\nenter number of rows:");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++){
		for(x=1;x<=num;x++){
			if(x-i>=0){
				printf("* ");
			}
			else{
				printf(". ");
			}
		
		
		}
		printf("\n");
	}
}
