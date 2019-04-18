#include<stdio.h>
#include<stdlib.h>

void sum(void*,void*);
void main(){
	void *a,*b,*s;
	a = (void*)malloc(1024);
	b = (void*)malloc(1024);
	printf("\nenter Two numbers:\n");
	scanf("%s",a);
	scanf("%s",b);
	printf("\n%s \n%s",a,b);
	sum(a,b);
	//printf("\nSum of two numbers: %s",*(void*)s);
}
void sum(void* a,void* b){
	static void *su;
	
	su = (void*)malloc(1024);
	
	int i,typee[2]={0};
	
	for(i=0;*(char*)(a+i)!='\0'&&*(char*)(b+i)!='\0';i++){
		if(*(char*)(a+i)=='.'){
			typee[0]=1;
		}
		if(*(char*)(b+i)=='.'){
			typee[1]=1;
		}
	}
	
	if(typee[0]>0||typee[1]>0){
		//typedef float* type1;
		//typedef int* type2
		
		typedef float* type;
		
		*(type)a =atof(a); 
		*(type)b =atof(b);
		*(type)su = (*((type)a)+ *((type)b));
		printf("\nSum of Two floats : %.3f",*(type)su);
		
	}
	else{
		typedef int* type;
		*(type)a = atoi(a);
		*(type)b = atoi(b);
		*(type)su = (*((type)a)+ *((type)b));
		printf("\nSum of Two integers : %d",*(type)su);
		//printf("\nSum of Two integers : %d",*((int*)a) + *((int*)b));
	}
	
}

