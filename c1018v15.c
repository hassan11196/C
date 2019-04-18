#include<stdio.h>

void main(){
	
	int x,i,num,b,j,k;
	printf("enter number of roew:");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++){
		for(b=num-i;b!=0;b--){
			printf(" ");
		}
		for(x=1;x<=i;x++){
			printf("* ");
		}
		printf("\n");
	}
	for(i=num;i!=0;i--){
		for(b=num-i;b!=0;b--){
			printf(" ");
		}
		for(x=1;x<=i;x++){
			printf("* ");
		}
		printf("\n");
		
	}
}
