#include <stdio.h>

int main(){
	
	char c;
	int caplet;
	int smallet;
	
	printf("enter any letter of the alphabet:");
	scanf("%c",&c);
	
	caplet = (c == 'a'||c == 'e'||c == 'i'||c == 'o'||c ==  'u');
	smallet = ( c == 'A'||c == 'E'||c =='I'||c == 'O'||c == 'U');
	
	if(caplet || smallet)
	printf("letter %c is a vowel",c);
	else
	printf("letter %c is a consonant",c);
	
	return 0;

	
	
	
}
