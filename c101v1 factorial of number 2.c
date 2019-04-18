#include<stdio.h>

void main(void){
	
	printf("\t\t**program to find factorial of a number.**");
	int i=1,n,fac=1;
	
	
	printf("\nenter any number:");
	scanf("%d",&n);
	
	while(i<=n){
		
		fac*=i;
		++i;
		
		
	}
	printf("factorial of %d is %d",n,fac);
	
}
