#include<stdio.h>
#include<ctype.h> 
void ctype();
void main(){
	ctype();
}
void ctype(){//uncomplete
	char ch;
	printf("Enter any character,number,special charcter etc:");
	scanf("%c",&ch);
	if(isalnum(ch))
	printf("\n%c is Alphanumeric.");
	if(isalpha(ch))
	printf("\n%c is Alphabet.");
	
	if(isdigit(ch))
	printf("\n%cis Digit.");
	//if(punc(ch))
	//printf("\n%c is punctuation charcter.");
	
}
