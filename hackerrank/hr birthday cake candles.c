
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int birthdayCakeCandles(int n, int ar_size, int* ar) {
     int ar_i,max=0,cnt=0;
     for(ar_i = 0; ar_i < n; ar_i++){
       max = (max>ar[ar_i]) ? max:ar[ar_i];
    }
	 for(ar_i=0;ar_i<n;ar_i++){
    	if(max==ar[ar_i])
    	cnt++;
	}
	return cnt;
}

int main() {
    int n,max=0,cnt=0; 
    scanf("%i", &n);
    int *ar = malloc(sizeof(int) * n),ar_i;
    for(ar_i = 0; ar_i < n; ar_i++){
       scanf("%i",&ar[ar_i]);
       max = (max>ar[ar_i]) ? max:ar[ar_i];
    }
   
    int result = birthdayCakeCandles(n, n, ar);
    printf("%d\n", result);
    return 0;
}

