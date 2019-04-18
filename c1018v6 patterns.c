#include<stdio.h>
void main(void){



	int num,i,l,x=1,b,n1,n2;
	printf("\nenter required rows of pattern:");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++){
		
		for(b=(num-(i-1)*2+(num));b>0;b--){
			printf(" ");
		}
		
		for(l=1;l<=i;l++){
		
		printf("%d ",i);
		
	
	}
	printf("\n");
	
	}
}
















