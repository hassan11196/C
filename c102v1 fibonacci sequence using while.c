#include<stdio.h>

void main(void){
	printf("\t\t program to print fibonacci sequence:");
	
	int i,x,n1=0,n2=1,v;
	
	printf("\nenter number of terms in fibonacci sequence:");
	scanf("%d",&x);
	
	printf("\t\tfibonacci sequence:");
	
	while(i<=x){
		i++;
		
		
		printf("%d,",n1);
		
		v= n1+n2;
		n1=n2;
		n2=v;
		
		
	}
	
	
	
}
