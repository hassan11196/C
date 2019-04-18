#include<stdio.h>

void main(){
	printf("\ta program in C to display the pattern like \n\tright angle triangle using an asterisk\n");
	int n,i,l;
	printf("enter required rows of pattern:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		
		for(l=1;l<=i;l++){
		
		printf("*");
	}
	printf("\n");
	}
}
