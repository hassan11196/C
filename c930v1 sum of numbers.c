#include <stdio.h>
 void main (void){
 	
 	printf("\t\t**program to find sum of natural numbers.**");
	int i,n,sum=0;
	
	printf("\nenter any number:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		
		sum+=i;
	
		
	}
	printf("\nsum of %d numbers : %d",n,sum);
 	
 	
 	
 	
 }
