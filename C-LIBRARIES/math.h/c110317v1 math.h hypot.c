#include<stdio.h>
#include<math.h>

void main(){
	float base,perp;
	float hyp;
	
	printf("\nEnter length of base and perpendicular:");
	scanf("%f %f",&base,&perp);
	hyp=hypot(base,perp);
	printf("\nLength of Hypotnuse: %.2f",hyp);
	
}
