#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int* appleAndOrange(int s, int t, int a, int b, int apple_size, int* apple, int orange_size, int* orange, int *result_size) {
    *result_size = 2;
    int i;
    int *result = (int*)calloc(2,sizeof(int));
    //if(a<s&&s<t&&t<b){
	
    for(i=0;i<apple_size;i++){
    	if(s-a<=apple[i]&&t-a>=apple[i]){
    		result[0]+=1;
		}
	}
	for(i=0;i<orange_size;i++){
		if(b-t<=-1*orange[i]&&b-s>=-1*orange[i]){
    		result[1]+=1;
		}
	}
	
	
	return result;
}

int main() {
    int s; 
    int t; 
    scanf("%i %i", &s, &t);
    int a; 
    int b; 
    scanf("%i %i", &a, &b);
    int m; 
    int n; 
    scanf("%i %i", &m, &n);
    int *apple = malloc(sizeof(int) * m);
    int apple_i = 0;
    for (apple_i = 0; apple_i < m; apple_i++) {
       scanf("%i",&apple[apple_i]);
    }
    int *orange = malloc(sizeof(int) * n);
    int orange_i = 0;
    for (orange_i = 0; orange_i < n; orange_i++) {
       scanf("%i",&orange[orange_i]);
    }
    int result_size;
    int* result = appleAndOrange(s, t, a, b, m, apple, n, orange, &result_size);
    int result_i = 0;
	for(result_i = 0; result_i < result_size; result_i++) {
        if(result_i) {
            printf("\n");
        }
        printf("%d", result[result_i]);
    }
    puts("");


    return 0;
}

