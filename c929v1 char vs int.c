#include<stdio.h>

void main(void){
	printf("program to check walue entered is integer or character");
	char c;
	
	printf("\nenter character or number:");
	scanf("%c",&c);
	
	if((c>= 'a' && c<='z') || (c>= 'A' && c>= 'Z'))  //if( (c>='a' && c<='z') || (c>='A' && c<='Z'))
	{
		printf("\ncharacter is entered");
		
		
	}
	else{
		printf("\ninteger is entered");
		
		
	}
	
	
}
