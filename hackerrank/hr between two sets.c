#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int getTotalX(int a_size, int* a, int b_size, int* b) {
    int i , j=0 ,x=1,temp=1,flag=0,num=0,a_cnt,b_cnt;
    for(i=1;i<10000;i++){
    	a_cnt=0;
    	b_cnt=0;
    	for(j=0;j<a_size;j++){
    		if(i%a[j]==0)
    		{
    			a_cnt++;
			}
			else{
				break;
			}
		}
		if(a_cnt==a_size){
			for(j=0;j<b_size;j++){
				if(b[j]%i==0){
					b_cnt++;
				}
				else{
					break;
				}
			}
			if(b_cnt==b_size){
				num++;
			}
		}
	}
    
	return num;
}

int main() {
    int n; 
    int m; 
    scanf("%i %i", &n, &m);
    int *a = malloc(sizeof(int) * n);
    int a_i = 0;
    for ( a_i = 0; a_i < n; a_i++) {
       scanf("%i",&a[a_i]);
    }
    int *b = malloc(sizeof(int) * m);
    int b_i = 0; 
    for (b_i = 0; b_i < m; b_i++) {
       scanf("%i",&b[b_i]);
    }
    int total = getTotalX(n, a, m, b);
    printf("%d\n", total);
    return 0;
}

