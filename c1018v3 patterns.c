#include<stdio.h>
void main(void){



	int num,i,l,x=1,b,n1,n2,p;
	printf("\nenter required rows of pattern:");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++){
	
		for(b=(2*num-(i-1)*2);b>0;b--){
			printf(" ");
		}
		
		for(l=1;l<=i;l++){
		
		printf("%d ",x--);	
		}
		for(p=1;p<=l;p++){
			x++;
		}
	printf("\n");
	
	}
}
















