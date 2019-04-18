#include<stdio.h>
#include<math.h>
void main(){
	
	int num,dig;
	printf("Enter number:");
	scanf("%d",&num);
	dig=log10(num)+1;
	printf("\nNumber of digits : %d ",dig);
}
