#include<stdio.h>

void main(void){
	
	printf("\t\t**program to find factorial of a number.**");
	int i,n,fac=1;
	
	
	printf("\nenter any number:");
	scanf("%d",&n);
	
	for (i=1;i<=n;i++){
		
		fac*=i;
		
		
	}
	printf("\nfactorial of %d is %d",n,fac);









	
}
