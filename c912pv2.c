#include<stdio.h>

int main() {
	printf("test run for scan operation\n");
	
	int i;
	char str[100];
	printf("enter any number:");
	
	scanf("%s %d",str,&i);
	
	printf("\nthe number entered is:%s %d \n",str,i);
	
	int a;
	char str_a[100];
	printf("enter another number:");
	
	scanf("%s %d",str_a,&a);
		
	printf("the number you entered is: %s %d\n",str_a,a);
	
	
	printf("enter any number:");
	
	scanf("%s %d",str,&i);
	
	printf("\nthe number entered is:%s %d \n",str,i);

return 0;
	
	
	
}
