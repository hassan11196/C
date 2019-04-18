#include<stdio.h>

void main(){
	char A[20];
	int i=0;
	printf("\nEnter string:");
	gets(A);
	while(A[i]!='\0'){
		if(i==0)
			printf("%c",A[i++]-32);
		else if(A[i]==' '){
			printf("%c",A[i]);
			printf("%c",A[++i]-32);
			i++;
		}
		else{
			printf("%c",A[i++]);
		}
	}
}
