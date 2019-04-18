#include<stdio.h>
#include<math.h>

void main(){
	printf("\t\tprogram to find power of a number");
	int num,p,pro;
	
	printf("\nenter any number:");
	scanf("%d",&num);
	printf("\nenter power:");
	scanf("%d",&p);
	pro = pow(num,p);
	
	printf("\nnumber %d raised to the power %d is %d",num,p,pro);
	getch();
	
	
}
