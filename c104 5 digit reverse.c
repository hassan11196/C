#include <stdio.h>

void main(){
	
	printf("\t\tprogram to print 5 digit reverse number");
	
	int n,n1,n2,n3,n4,n5,nn1,nn2,nn3,nn4,nn5;
	int nt;
	printf("\nenter five digit number:");
	scanf("%d",&n);
	
	printf("\nnumber entered is : %d",n);
	
	n1 = n / 10000;
	nt = n % 10000;
	n2 = n / 1000 - (10*n1);
	nt = n % 1000;
	n3 = n / 100 - (10*n2) - (100*n1);
	nt = n % 100;
	n4 = n / 10 - (10*n3) - (100*n2) - (1000*n1);
	nt = n % 10;
	n5 = n - (10*n4) - (100*n3) - (1000*n2) - (10000*n1);
	printf("\nn1=%d",n1);
		printf("\nn2=%d",n2);
		printf("\nn3=%d",n3);
		printf("\nn4=%d",n4);
		printf("\nn5=%d",n5);
	

}
