#include<stdio.h>

void taker(int x);
void printer(int x);

void main(){
	fflush(stdin);
	int num,mun=963;
	int *x;
	x=&mun;
	printf("Enter amount of values tobe stored: ");
	scanf("%d",&num);
	/*for(i=1;i<=num;i++){
		y = (*x + 1);
		printf("%d\n",y);
	}*/
	printf("\n%d ",&mun);
	printf("\n%d ",*x);
	printf("\n%d \n",&x);

	x=&num;
	printf("\n%d ",x);
	printf("\n%d ",&x);
	printf("\n%d \n",*x);
	/*x=num;
	printf("\n%d ",x);
	printf("\n%d \n",&x);
	*/
	
}
