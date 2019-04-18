#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    int k,min=INT_MAX,max=0,tot=0,disbet=0,tempx,i,j; 
    scanf("%d %d",&n,&k);
    int *x = malloc(sizeof(int) * n),x_i;
    for(x_i = 0; x_i < n; x_i++){
       	scanf("%d",&x[x_i]);
    	min = (min<x[x_i]) ? min:x[x_i];
		max = (max>x[x_i]) ? max:x[x_i];
		if(x_i>0)
		disbet += abs(x[x_i]-x[x_i-1]);
	}
	for(x_i = 0;x_i < n;x_i++){
		for(j=0;j<n-x_i-1;j++){
			if(x[j]>x[j+1]){
				tempx = x[j];
				x[j] = x[j+1];
				x[j+1] = tempx;
			}
		}
	}
	int avgdis,t=0;
	avgdis = (max-min)/((2*(k+1))-1);
	int **r = (int**)malloc((avgdis+1)*sizeof(int*));
	for(i=0;i<avgdis+1;i++){
		r[i] = (int*)malloc(((2*(k+1))-1)*sizeof(int));
		for(j=0;j<((2*(k+1))-1);j++){
			r[i][j] = min + t++ ;
		}
	}
	for(i=0;i<n;i++){
		printf("%d ",x[i]);
	}
	printf("\n");
	for(i=0;i<avgdis+1;i++){
		for(j=0;j<((2*(k+1))-1);j++){
			printf("%d ",r[i][j]);
		}
		printf("\n");
	}
	
    
    return 0;
}

