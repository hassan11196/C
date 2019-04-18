#include<stdio.h>
void sppv65();
void main(){
	sppv65();
}
void sppv65(){
		int num,i,j,k;
	char ch=65;
	
	printf("Enter number of rows:");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++){
		ch=65;
		for(j=1;j<=num;j++){
			if(j<=num-i+1)
			printf("%c",ch++);
			else
			printf("_");
		}
		ch--;
		for(j=1;j<=num;j++){
			if(j<=i-1)
			printf("_");
			else
			printf("%c",ch--);
		}
		printf("\n");
	}
	
}
