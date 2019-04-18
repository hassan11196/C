#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int solve(int n, int s_size, int* s, int d, int m){
    int i,j,k,num=0,temp_sum=0;
    for(i=0;i<s_size;i++){
    	temp_sum=0;
    	k=i;
    	for(j=0;j<m;j++){
    		temp_sum+=s[k++];
		}
		if(temp_sum == d){
			num++;
		}
	}
	
	return num;
}

int main() {
    int n; 
    scanf("%d", &n);
    int *s = malloc(sizeof(int) * n);
    int s_i = 0; 
	for(s_i = 0; s_i < n; s_i++){
       scanf("%d",&s[s_i]);
    }
    int d; 
    int m; 
    scanf("%d %d", &d, &m);
    int result = solve(n, n, s, d, m);
    printf("%d\n", result);
    return 0;
}

