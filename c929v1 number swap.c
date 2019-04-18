#include <stdio.h>

void main(void){
	printf("program to inter change two numbers");
	int num1,num2;
	
	printf("\nenter first number:");
	scanf("%d",&num1);
	
	printf("\nenter second number:");
	scanf("%d",&num2);
	
	num1+=num2;
	num2=num1-num2;
	num1=num1-num2;
	printf("\nfirst number interchanged: %d",num1);
	printf("\nsecond number interchanged: %d",num2);
	
	
	
}
