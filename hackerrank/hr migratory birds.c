#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int migratoryBirds(int n, int ar_size, int* ar) {
	// not correct
    int  i,j,max,*temp;
    int *id = (int*)calloc(5,sizeof(int));
    int **k = (int**)calloc(5,sizeof(int*));
    for(i=0;i<n;i++){
    	for(j=0;j<5;j++){
    		k[j]=&id[j];
    		if(ar[i]==j+1){
			id[j]++;
			}	
		}
	}
	for(i=0;i<5;i++){
		for(j=0;j<4;j++)
		{
			if(*k[j]>*k[j+1]){
				temp = k[j];
				k[j] = k[j+1];
				k[j+1] = temp;
			}
		}
	}
	max = (*k[4] == *k[3]) ? ((int)(k[4] - &id[0])):((int)(k[4] - &id[0]) +1 );
	
	return max ;
}

int main() {
    int n; 
    scanf("%i", &n);
    int *ar = malloc(sizeof(int) * n);
    int ar_i = 0; 
	for(ar_i = 0; ar_i < n; ar_i++){
       scanf("%i",&ar[ar_i]);
    }
    int result = migratoryBirds(n,ar_i,ar);
    printf("%d\n", result);
    return 0;
}

