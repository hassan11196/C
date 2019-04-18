#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int divisibleSumPairs(int n, int k, int ar_size, int* ar) {
   int i , j,pair=0;
   for(i=0;i<ar_size;i++){
		for(j=i+1;j<ar_size;j++){
			if((ar[i]+ar[j])%k==0){
				pair++;
			}
		}
   }
   return pair;
}

int main() {
    int n; 
    int k; 
    scanf("%i %i", &n, &k);
    int *ar = malloc(sizeof(int) * n);
    int ar_i = 0; 
	for(ar_i = 0; ar_i < n; ar_i++){
       scanf("%i",&ar[ar_i]);
    }
    int result = divisibleSumPairs(n, k, n, ar);
    printf("%d\n", result);
    return 0;
}

