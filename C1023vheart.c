#include<stdio.h>

void pattern();

int main(){
	pattern();
}


void pattern(){
	int num,n,i,j,x=1,b;
	printf("enter number:");
	scanf("%d",&num);
	n=num;

	
	for(i=1;i<=n/2;i++){
			
	for(b=n/2-i+1;b!=0;b--){
		printf(" ");
	}
			for(j=1;j<=2*i-1;j++){
				if(i==1){
				continue;
				}
			
					printf("*");
           
       
			}
if(n%2==0){x=1;}
        else{x=-1;}
 
        while(x<=n/2-i){
				printf(" ");
         x++;
         
			}
			
		
			
		for(b=n/2-i+1;b!=0;b--){
		printf(" ");
     
       
	
	}
			for(j=1;j<=2*i-1;j++){
				if(i==1){
				continue;
				}
			
					printf("*");
           
			}
		
		
		
		printf("\n");
	}
	
/*	for(i=1;i<=n/2;i++){
		for(j=1;j<=2*n+1;j++){
			if(j-i>4&&j-i<6){
				printf(" ");
				continue;
			}
			else{
				printf("*");
			}
		}
		printf("\n");
	
	}*/
	
	
	//printf("//////////////////");
	for(i=1;i<=n;i++){
			printf(" ");
		
		for(j=1;j<=2*n+1;j++){
			if(j<i||j>2*n-i){
				printf(" ");
					continue;
			}
		
			else
			
			printf("*");
		}
	
		printf("\n");
	}
}
