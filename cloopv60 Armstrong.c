#include<stdio.h>
#include<math.h>
void cloopv60();
void cloopv61();
void main(){
	int code;
	printf("enter code:");
	scanf("%d",&code);
	
	switch(code){
		case 60:{
			cloopv60();
			break;
		}
	}
}
void cloopv60(){
	printf("\nProgram to check Armstrong number");
	int num,i,j,k,sum=0,tnum,power=0;
	printf("\nenter number:");
	scanf("%d",&num);
	tnum=num;
	while(tnum!=0){
		tnum/=10;
		power++;
	}
	tnum=num;
	while(tnum!=0){
		sum = sum + pow(tnum%10,power);
		tnum/=10;
	}
	if(sum==num)
	printf("\n%d is armstrong.",num);
	else
	printf("\n%d is NOT armstrong",num);

}
void cloopv61(){
	
}
