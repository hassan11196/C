#include <stdio.h>
void main(){
	printf("program to reverse a number.");
	
	int num,i,n;
	int arr[100];
	printf("\nenter any number.");
	scanf("%d",&num);
	
	printf("\nnumber entered is %d",num);
	if(num!=0){
		for(i=1;num>0;i++){
			arr[i]=num%10;
			num/=10;

		}
		
	}
	else{
		printf("\nplease enter a number else than zero.");
	}
	printf("\n\nreverse number is ");
	for(n=1;n<=(i-1);n++){
		printf("%d",arr[n]);
	}

}
