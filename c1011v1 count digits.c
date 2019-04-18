#include<stdio.h>

void main(){
	printf("\tprogram to count number of digits in an integer.");
	int num,i;
	printf("\nenter number:");
	scanf("%d",&num);
	
	if(num != 0){
		printf("\nnumber entered is  %d",num);
		for(i=1;num>=10;i++){
			num/=10;
		}
	}
	else{
		printf("please enter a number greater than 0.");
	}
	printf("\nnumber of digits in given number is %d",i);
	
	// using while loop.
	
	printf("\nenter number:");
	scanf("%d",&num);
	i=0;
	while(num!=0){
		num/=10;
		++i;
	}
	printf("\nnumber of digits in given number is %d",i);

}
