#include<Stdio.h>
#include<stdlib.h>
#include<string.h>

void main(){
	int num,i,j;
	char *tmp;
	char **name = (char**)malloc(1024*num*(sizeof(char*)));
	//char name[5][10];
	printf("\nSorting names:");
	
	printf("\nenter Number of names to be enterd :");
	scanf("%d",&num);
	
	printf("\nEnter names : \n");
	
	for(i=0;i<num;i++){
		name[i] = (char*)malloc(1024 * sizeof(char));
		fflush(stdin);
		gets(*(name + i));
	
	}
	printf("\nInput names :\n");
	for(i=0;i<num;i++){
		//printf("\n");
		puts(*(name + i));
		//printf("%s",*(name + i)); // no /n after end of string 
	}
	printf("\nSorted names :\n");
	for(i=0;i<num;i++){
		for(j=0;j<num-1;j++){
			if(strcmp(name[j],name[j+1])>0){
				tmp=name[j];
				name[j]=name[j+1];
				name[j+1]=tmp;
			}
		}
	}
	for(i=0;i<num;i++){
		puts(*(name + i));
	}
	
	
}
