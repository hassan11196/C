#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,i,j; 
    scanf("%d",&n);
    for(i=0;i<n;i++){
    	for(j=0;j<n;j++){
    		if(j<n-i-1)
    		printf(" ");
    		else
    		printf("#");
		}
		printf("\n");
	}
    return 0;
}

