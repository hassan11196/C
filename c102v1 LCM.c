#include<stdio.h>

void  main (void){
	
	printf("\t\tprogram to find GCD.");
	
	int x,i=1,n1,n2,n3,n4;
	

	

		
	printf("\nenter first number:");
	scanf("%d",&n1);
	printf("\nenter second number:");
	scanf("%d",&n2);
	
	
	if ((n1 != 0) && (n2 != 0)){
		
		for(i=2;;i++){
			
			
			
			
			
			
			if((n1%i == 0) && (n2%i == 0)){
			
			printf("the common factor is : %d",i);
			break;
		}
			
		}
		
		
		
	
	}
	
	
	
}
	
	

