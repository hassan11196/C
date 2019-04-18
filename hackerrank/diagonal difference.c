#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,a_i,a_j,sum_i=0,sum_j=0; 
    scanf("%d",&n);
    int a[n][n];
    for(a_i = 0; a_i < n; a_i++){
       for(a_j = 0; a_j < n; a_j++){
          scanf("%d",&a[a_i][a_j]);
          if(a_i==a_j){
          	sum_i += a[a_i][a_j];
		  }
		  if(a_j==n-a_i-1){
		  	sum_j += a[a_i][a_j];
		  }
       }
    }
    int diff = sum_i-sum_j;
    if(diff<0) diff*=-1;
    printf("%d",diff);
    
    return 0;
}

