#include<stdio.h>

void main(void){
	
	printf("\t\tprogram to print fiboannci sequence:");
	
	
	int i=0,x,n=0,m=1,v;
	
	printf("\nenter terms required in fiboannci sequence:");
	scanf("%d",&x);

	for(i=1;i<=x;i++){
	

		
		printf("%d,",n);
	
		v=n+m;
		n=m;
		m=v;
		
	
	
		
	}
	
	getch();
	
	
}
