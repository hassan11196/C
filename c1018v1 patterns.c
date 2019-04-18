#include<stdio.h>
void main(void){

	printf("\tWrite a program in C to make such a pattern like \n\tright angle triangle with number increased by 1.\n");

	int n,i,l,x=1,b;
	printf("enter required rows of pattern:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		
		for(b=n-i;b!=0;b--){
			printf(" ");
		}
		
		for(l=1;l<=i;l++){
		
		printf("%d ",x++);
		
	
	}
	printf("\n");
	
	}
}
















