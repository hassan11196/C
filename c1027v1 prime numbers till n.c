#include<stdio.h>

void primeprint(int a);
void main(){
	printf("\tprogram to print prime numbers:");
	int num;
	printf("\nenter amount of prime numbers:");
	scanf("%d",&num);
	
	primeprint(num);
}
void primeprint(int a){
	int i,j,check=0;
	
	for(i=2;check!=a;i++){
	
		for(j=2;j<=i;j++){
			if(i%j==0&&j<i){
				break;
			}
			if(i%j==0&&i==j){
				printf("%d is %d prime number\n",j,++check);
				break;
			}
	
		}
	}
	
}
