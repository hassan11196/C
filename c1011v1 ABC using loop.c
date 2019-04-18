#include<stdio.h>

int main(){
	int x;
	char i;
	printf("\tprogram to print alphabets using loop.");
	printf("\nenter any key to print alphanets.");
	scanf("%d",&x);
	
	for (i='a';i<='z';i++){
	
		printf("%c \t",i-32);
			printf("%c \t\n",i);
	}

}
