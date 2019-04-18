#include<stdio.h>
void main (void)
{
	int a;
	printf("\t\tprogram to check leap year\n");
	printf("enter year:");
	scanf("%d",&a);
	
	if (a%4 == 0){
		printf("year %d is leap year.",a);
	}
	else {
		printf("year %d is not leap year.",a);
	}
	
getch();
}


