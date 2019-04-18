#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int* breakingRecords(int score_size, int* score, int *result_size) {
    int *broke = (int*)calloc(2, sizeof(int));
	int i,j,max=score[0],min=score[0];
	*result_size = 2 ; 
	for(i=1;i<score_size;i++){
		if(max<score[i]){
			max = score[i];
			broke[0]++;
			
		}
		if(min>score[i]){
			min = score[i];
			broke[1]++;
		}
	}
	return broke;
}

int main() {
    int n; 
    scanf("%i", &n);
    int *score = malloc(sizeof(int) * n);
    int score_i = 0;
	for (score_i = 0; score_i < n; score_i++) {
       scanf("%i",&score[score_i]);
    }
    int result_size;
    int* result = breakingRecords(n, score, &result_size);
    int result_i = 0; 
	for( result_i = 0; result_i < result_size; result_i++) {
        if(result_i) {
            printf(" ");
        }
        printf("%d", result[result_i]);
    }
    puts("");


    return 0;
}

