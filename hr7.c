#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int* solve(int a0, int a1, int a2, int b0, int b1, int b2, int *result_size){
    // Complete this function
    
    
    *result_size=0;
    *(result_size+1)=0;
    *(result_size+2)=0;
    
    if(a0>b0){
    *(result_size+1)=*(result_size+1)+1;
	}
	else if(a0==b0){
	*(result_size+1)=*(result_size+1);
	*(result_size+2)=*(result_size+2);
    }
    else if(a0<b0){
    *(result_size+2)=*(result_size+2)+1;
    }
    
    
    if(a1>b1){
    *(result_size+1)=*(result_size+1)+1;
	}
	else if(a1==b1){
	*(result_size+1)=*(result_size+1);
	*(result_size+2)=*(result_size+2);
    }
    else if(a1<b1){
    *(result_size+2)=*(result_size+2)+1;
    }
    
	if(a2>b2){
    *(result_size+1)=*(result_size+1)+1;
	}
	else if(a2==b2){
	*(result_size+1)=*(result_size+1);
	*(result_size+2)=*(result_size+2);
    }
    else if(a2<b2){
    *(result_size+2)=*(result_size+2)+1;
    }
	/*
    if(a0>b0||a1>b1||a2>b2){
    *result_size+=1;
    }
    if(a0<b0||a1<b1||a2<b2){
    *result_size+=1;
    }
    if(a0==b0||a1==b1||a2==b2){
    *result_size+=1;
    }
    */
   
    *result_size=2;
    
    return result_size;
}

int main() {
    int a0; 
    int a1; 
    int a2; 
    scanf("%d %d %d", &a0, &a1, &a2);
    int b0; 
    int b1; 
    int b2; 
    scanf("%d %d %d", &b0, &b1, &b2);
    int result_size;

    //result_size=(int*)malloc(10*sizeof(int));
    int* result= solve(a0, a1, a2, b0, b1, b2, &result_size);
    
	int result_i;
	
	 
    for(result_i = 0; result_i < result_size; result_i++) {
        
		if(result_i) {
            printf(" ");
        }
        
        printf("%d", result[result_i+1]);
        /*
		printf("*%d %d %d*\n",result,(result+1),(result+2));
        printf("*%d %d %d*\n",result[result_i],result[result_i+1],result[result_i+2]);
        printf("*%d %d %d*\n\n",&result[result_i],&result[result_i+1],&result[result_i+2]);
    	*/
    	
	}
    puts("");
    
    return 0;
}

