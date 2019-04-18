#include<stdio.h>

void main(){
	
	int x,i,num,b,j,k;
	printf("enter number of roew:");
	scanf("%d",&num);
	num=num+1;
	for(i=1;i<=num;i++){
		if(i<=num/2){
		
		for(b=num-i;b!=0;b--){
			printf(" ");
		}
		for(x=1;x<=i;x++){
			if(x==1||x==i){
			
			printf("* ");
			}
			else{
				printf("  ");
			}
		}
	}
		else{
			for(b=1;b<=i;b++){
			printf(" ");
		}
		for(x=num-i;x!=0;x--){
			if(x==num-i||x==1){
			
			printf("* ");
			}
			else{
				printf("  ");
			}
		
		}
			
		}
	
		printf("\n");
	}
	}
	
/*	for(i=num;i!=0;i--){
		for(b=num-i;b!=0;b--){
			printf(" ");
		}
		for(x=1;x<=i;x++){
			printf("* ");
		}
		printf("\n");
		
	}*/
