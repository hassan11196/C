#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    scanf("%d",&n);
    int arr_i,arr[n];
    int cnt_0=0,cnt_p=0,cnt_n=0;
    for(arr_i = 0; arr_i < n; arr_i++){
       scanf("%d",&arr[arr_i]);
       if(arr[arr_i]==0){
       	cnt_0+=1;
	   }
	   else if(arr[arr_i]>0){
	   	cnt_p+=1;
	   }
	   else if(arr[arr_i]<0){
	   	cnt_n+=1;
	   }
    }
    printf("%.6f\n",(float)cnt_p/n);
    printf("%.6f\n",(float)cnt_n/n);
    printf("%.6f",(float)cnt_0/n);
    
    return 0;
}

