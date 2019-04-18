#include <stdio.h>

int main(){
	double num1,num2,num3,num4;
	double numt;
	
	printf("enter first number:");
	scanf("%lf",&num1);
	
	printf("enter second number:");
	scanf("%lf",&num2);
	
	numt=num1;
	num1=num2;
	num2=numt;
	
	printf("\nafter swapping, first number: %.2lf",num1);
	printf("\nafter swapping, second number: %.2lf",num2);
	
	return 0;
	
	
	
	
	
}
