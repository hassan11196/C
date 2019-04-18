#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
	long int min=0,max=0;
    int *arr = malloc(sizeof(int) * 5),arr_i,arr_j;
    for(arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
       min += arr[arr_i];
    }
    
    for(arr_i=0;arr_i<5;arr_i++){
    	long int temp=0;
    	for(arr_j=0;arr_j<5;arr_j++){
    		if(arr_j!=arr_i)
    		temp += arr[arr_j];
		}
		min = (temp<min) ? temp:min;
		max = (temp>max) ? temp:max;
	}
	printf("%ld %ld",min,max);
    return 0;
}

