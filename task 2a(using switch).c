#include <stdio.h>

void main(){
	printf("\tprogram to decide whether given character is vowel or consonant.");
	
	char x;
	
	
	while (1){
	
	printf("\nenter alphabet:");
	scanf("%c",&x);
	
	
	
	
	switch (x){
		
		case 'a' :
		case 'A' :{
			printf("\nyou enetered vowel %c",x);
			break;
			}
			case 'e' :
			case 'E': {
			printf("\nyou enetered vowel %c",x);
			break;
			}
			case 'i' :
			case 'I':{
			printf("\nyou enetered vowel %c",x);
			break;
			}
			case 'o' :
			case 'O':{
			printf("\nyou enetered vowel %c",x);
			break;
			}
			case 'u' :
			case 'U':{
			printf("\nyou enetered vowel %c",x);
			break;
			}
			
		default:{
			printf("\n%c is consonant.",x);
			continue;
		}
			
	
	}
}
}
