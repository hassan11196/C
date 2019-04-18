#include<stdio.h>
void main(){
	
	int i,x,num,j,b;
	printf("\nenter number of rows:");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++){
		
		for(b=((num-i));b!=0;b--){
			printf(" ");
		}
		for(x=1;x<=i/2||x>=i/2;x++){
			printf("* ");
		}
	/*	for(x=1;x<=num;x++){
			if(x-i==0||(num==x+i-1)){
				printf("* ");
			}
			else{
				printf(". ");
			}
	*/	
		
		
		printf("\n");
	}
}
