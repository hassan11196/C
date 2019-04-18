#include<stdio.h>

int add(int x,int y);
int main(){
	printf("\t\tprogram to call functions.");
	int num1,num2;
	char oper;
	printf("\nenter first num:");
	scanf("%d",&num1);
	printf("\nenter second num:");
	scanf("%d",&num2);
	

	while(1){
	
		printf("enter operation to perform:(/,*,-,+,%%)");
	scanf(" %c",&oper);
	
	
	if(oper == '+'){
		add(num1,num2);
	break;
	}
	else if(oper == '-'){
		sub(num1,num2);
		break;
	}
	else if(oper == '*'){
		mul(num1,num2);
		break;
	}
	else if(oper == '/'){
		div(num1,num2);
		break;
	}
	else if(oper == '%'){
		mod(num1,num2);
		break;
	}
	else{
		printf("enter a valid operation (/,*,-,+,%%)");
		continue;
	}
	
}
}
int add(int x,int y){
	int sum= x+y;
	printf("the sum of %d and %d is %d",x,y,sum);
	
}
int sub(int x,int y){
	int sub= x-y;
	printf("the difference of %d and %d is %d",x,y,sub);
}
int mul(int x,int y){
	int mul= x*y;
	printf("the product of %d and %d is %d",x,y,mul);
}
int div(int x,int y){
	int div= x/y;
	printf("the quotient of %d and %d is %d",x,y,div);
}
int mod(int x,int y){
	int mod= x%y;
	printf("the remainder when  %d is divided by %d is %d",x,y,mod);
}
	

	
	
