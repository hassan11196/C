#include<stdio.h>

void main(void){
	
	printf("\t\t**program to find sum of natural numbers.**");
	int i,n,sum=0;
	
	
	do {
	
	
	printf("\nenter any positive number:");
	scanf("%d",&n);
	

}
    while(n<=0);
    
	while(i<=n){
		sum+=i;
		i++;
	}
	printf("sum of %d numbers : %d",n,sum);
	



}
