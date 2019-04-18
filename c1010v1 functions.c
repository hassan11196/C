#include <stdio.h>

int calsum(int p,int q,int r);
int main ()
{
	printf("\t\tprogram to add three numbers.\n");
	
	int a,b,c,oper;
	printf("enter three numbers.");
	scanf("%d %d %d",&a,&b,&c);
	
	printf("three numbers entered are %d %d %d",a,b,c);

		oper = calsum(a,b,c);
		printf("\nthe sum of three numbers is %d ",oper);
	return 0;
	
}
int calsum(int p,int q,int r){
	int sum;
	sum = p+q+r ;
	return sum;
	
}
