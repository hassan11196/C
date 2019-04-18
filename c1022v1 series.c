#include<stdio.h>

void series(int a,int b);
void main(){
	int num1,num2;
	printf("\tsum of the series [ 1-X^2/2!+X^4/4!- .........]. \n");
	printf("input the value of x:");
	scanf("%d",&num1);
	printf("input the number of terms:");
	scanf("%d",&num2);
	
	series(num1,num2);
	printf("\nnumber of terms: %d",num2);
	printf("\nvalue of x=%d",num1);
	
}
void series(int a,int b){
	int i,j,k,v,p,blank,bake;
	float value,sum=0;
	
	for(i=1;i<=b;i++){
		v=(i-1)*2;
		if(v==0){
			k=1;
		}
		else{
			k=v;
		}
		blank=k;
		for(k=v-1;k>1;k--){
			blank = blank * k;
		}
		bake=1;
		for(j=1;j<=v;j++){
			bake = bake * a;
		}
		if(i%2==0){
			value = (-1)*(((float)bake)/blank);
		}
		else{
			value = (((float)bake)/blank);
		}
		printf("\n X^%d / %d! = ",v,v);
		printf("%lf \n",value);
		sum = sum + value;
	}
	printf("\nThe sum: %lf",sum);
	
}
