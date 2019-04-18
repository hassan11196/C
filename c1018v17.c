#include<stdio.h>

void main(){
	
	int x,i,num,b,j,k;
	printf("enter number of roew:");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++){
		if(i<=num/2){
		
		for(b=num-i;b!=0;b--){
			printf(" ");
		}
		for(x=1;x<=2*(i)-1;x++){
			printf("*");
			
		}
	}
		else{
			for(b=1;b<=i-1;b++){
			printf(" ");
		}
		for(x=2*num-2*i+1;x!=0;x--){
			printf("*");
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
