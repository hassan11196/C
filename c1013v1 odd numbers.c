#include <stdio.h>

void main(){
	printf("\ta program in C to display the n terms of\n\t odd natural number and their sum.\n");\
	int n,i,x=1,sum=0; 
	printf("enter required number of odd natural numbers:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		
			if(x%2 != 0){
			
			printf("%dth odd number is %d\n",i,x);
			sum = sum + x;
			x++;
		}
		if(x%2 == 0){
		
			x++;
	}
	}
	printf("sum of %d odd numbers is %d",i,sum);
}
