#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int* solve(int grades_size, int* grades, int *result_size){
    int i,multiple_5;
    int *round = (int*)malloc(grades_size*sizeof(int));
	for(i=0;i<grades_size;i++){
		if(grades[i]>=38){
			multiple_5 = ( ( ((grades[i]%10) == 5)||((grades[i]%10) == 0) ) ? (grades[i]):(grades[i]%10>5 ? ((grades[i]/10)*10 + 10):((grades[i]/10)*10 + 5)) );
			if(multiple_5 - grades[i] < 3){
				round[i] = multiple_5;
			}
			else{
				round[i] = grades[i];
			}
		}
		else{
			round[i] = grades[i];
		}
	}
	*result_size = grades_size;
	return round; 
}

int main() {
    int n; 
    scanf("%d", &n);
    int *grades = malloc(sizeof(int) * n);
    int grades_i;
    for( grades_i = 0; grades_i < n; grades_i++){
       scanf("%d",&grades[grades_i]);
    }
    int result_i = 0;
    int result_size;
    int* result = solve(n, grades, &result_size);
    for(result_i = 0; result_i < result_size; result_i++) {
        if(result_i) {
            printf("\n");
        }
        printf("%d", result[result_i]);
    }
    puts("");
    

    return 0;
}

