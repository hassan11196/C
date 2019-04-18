#include<stdio.h>
#include<time.h>
#include <stdlib.h>

int* getrand();
void main(){
	int p,*q,i;
	printf("\nRandom number genrator : ");
	q=getrand();
	
	for(i=0;i<10;i++){
		printf("\n*(q + [%d]) : %d",i,(q+i));
	}
	
}
int* getrand(){
	int i;
	int* r=(int*)malloc(10 /*sizeof( int)*/);
	//int r[10]; use pointer to return from heap
	srand( (unsigned)time( NULL ) );
	//srand(time(NULL));
	
	for(i=0;i<10;i++){
		//*(r+i)=rand();
		//printf("\n%d",*(r+i));
		r[i]=rand();
		printf("\n%d",r[i]);
	}
	return r;
	
}
