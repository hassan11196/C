#include<Stdio.h>
void reverser();
void main (){
	printf("\nprogram to reverse word using recursion.\n");
	reverser();
}
void reverser(){
	char ch;
	scanf("%c",&ch);
	if(ch!='\n'){
		reverser();
		printf("%c",ch);
	}
}
