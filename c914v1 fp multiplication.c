#include <stdio.h>

int main(){
	
	double a,b,c,d;
	
	printf("enter first number:");
	scanf("%lf",&a);
	
	printf("enter second number:");
	scanf("%lf",&b);
	
	c = a*b;
	
	printf("product: %.2lf",c);
	
	printf("\n");
	
	printf("enter two numbers:");
	scanf("%lf %lf",&a,&b);
	
	c=a*b;
	
	printf("product: %.2lf",c);
	
	printf("\n%lf %lf",a,b);
	
	return 0;
	
	
	
	
	
	
}
