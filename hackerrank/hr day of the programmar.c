#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

char* solve(int year){
    int i , temp , day , month;
	if(year>=1919){
    	if((year%4==0&&year%100!=0)||(year%400==0)){
    		day = 256 - 244;
		}
		else{
			day = 256 - 243;
		}
		month = 9;
	}
	else if(year == 1918){
		day = 25 - 256;
		month = 10;
	}
	else{
		if(year%4==0){
    		day = 256 - 244;
		}
		else{
			day = 256 - 243;
		}
		month = 9;
	}
	char *date = (char*)malloc(11*sizeof(char));
	sprintf(date,"%02d.%02d.%d",day,month,year);
	return date;
}

int main() {
    int year; 
    scanf("%d", &year);
    int result_size;
    char* result = solve(year);
    printf("%s\n", result);
    return 0;
}

