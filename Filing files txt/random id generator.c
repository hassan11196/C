#include<stdio.h>
#include<stdlib.h>

void main(){
	int i,num;
	printf("\nEnter number of random digits:");
	scanf("%d",&num);
	
	FILE *fp=fopen("ids.txt","w");
	
	for(i=0;i<num;i++){
		fprintf(fp,"%d\n",1000 + rand()%9000);
		printf("%d\n",1000 + rand()%9000);
	}
}
