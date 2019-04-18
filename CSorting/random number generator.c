#include<stdio.h>
#include<stdlib.h>

void main(){
	int i,num;
	printf("\nEnter number of random digits:");
	scanf("%d",&num);
	
	FILE *fp=fopen("numbers.txt","w");
	
	for(i=0;i<num;i++){
		fprintf(fp,"%d\n",rand()%num);
	}
}
