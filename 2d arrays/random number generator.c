#include<stdio.h>
#include<stdlib.h>

void main(){
	int i,num,r;
	printf("\nEnter number of random digits:");
	scanf("%d",&num);
	printf("\nEnter upper limit of range of random digits:");
	scanf("%d",&r);
	
	FILE *fp=fopen("numbers.txt","w");
	
	for(i=0;i<num;i++){
		fprintf(fp,"%d\n",rand()%r);
	}
}
