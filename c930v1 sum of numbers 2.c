#include<stdio.h>

void main(void){
	
	printf("\t\t**program to find sum of natural numbers.**");
	int i,n,sum=0;
	
	printf("\nenter any number:");
	scanf("%d",&n);
	
	while(i<=n){
	
	sum+=i;	
		i++;	
	
	}
	

	
	
		printf("\a\nsum of %d natural numbers is: %d",n,sum);
	
	
	
	
}
