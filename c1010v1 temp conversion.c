#include <stdio.h>

void main( ){
	printf("\tprogram to convert temperatur to fahrenheit or celsius.");
	
	float tc,tf,tn;
	int co; 
	
		while (1){
	printf("\nenter conversion type.\n\tFor celsius to fahrenheit,enter 1 \n\tFor fahrenheit to celsius,enter 2 \n");
	scanf("%d",&co);
	

	
	
	if(co == 1){
		printf("\nenter temp in celsius:");
		scanf("%f",&tc);
		
		tf = ((tc*9)/5)+32;
		printf("\ntemp in fahrenheit %.3f",tf);
		break;
	}
	else if(co == 2){
		printf("\nenter temp in fahrenheit:");
		scanf("%f",&tf);
		tc = ((tf -32) * 5)/9 ;
		printf("\ntemp in celsius %.3f",tc);
		break;
	}
	
	else{
		printf("\nplease enter either 1 or two ");
		continue;
		
	}
	
}
	
	
}

