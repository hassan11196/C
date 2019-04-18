#include<stdio.h>

void main(){
	printf("program to print pyramid:\n");
	int x,i,z,num;
	
	printf("enter number of rows:");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++){
		
		for(z=(num-i);z>=1;z--){
				printf(" ");
			}	
		for(x=1;x<=i;x++){
			printf("%d ",i);
		}
		printf("\n");
	}
	
}
