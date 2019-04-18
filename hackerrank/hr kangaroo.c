#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

char* kangaroo(int x1, int v1, int x2, int v2) {
    int i,flag=0,s1,s2;
    s1 = x1;
    s2 = x2;
	for(i=0;i<10000&&flag==0;i++){
		if(s1==s2){
			flag++;
		}
		s1 += v1;
		s2 += v2;
	}
	if(flag!=0){
		return "YES";
	}
	else{
		return "NO";
	}
}

int main() {
    int x1; 
    int v1; 
    int x2; 
    int v2; 
    scanf("%i %i %i %i", &x1, &v1, &x2, &v2);
    if(x1>10000||x2>10000||v1>10000||v2>10000)
    return 0;
    
    int result_size;
    char* result = kangaroo(x1, v1, x2, v2);
    printf("%s\n", result);
    return 0;
}

