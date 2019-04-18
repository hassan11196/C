#include<stdio.h>
#include<math.h>
void main(){
	double num,tnum;
	
	printf("Enter any number:");
	scanf("%lf",&num);
	tnum=fabs(num);
	printf("|%.2lf| = %.2lf",num,tnum);
	
}
