#include<stdio.h>

void main(void){
	printf("\t\tprogram to print multiplication table:");
	
	int a,i,x,n,m;
	
	printf("\n\nenter number of multiplication table:");
	scanf("%d",&n);
	printf("\nenter number to print multiplication table till:");
	scanf("%d",&x);
	
	printf("\n\t\tmultiplication table of %d till %d",n,x);
	
	for(i=1;i<=x;i++){
		m = i * n; 
		
		printf("\n\t\t\t%d * %d = %d ",n,i,m);
		
		
	}
	
	getch();
	
	
	
	
	
	
}
