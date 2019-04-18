#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

char* timeConversion(char* s) {
   int len = strlen(s);
   char *mt = (char*)malloc(len);
   strncpy(mt,s,len-2);
   mt[len-2]='\0';
   if(s[len-2]=='P'){
   	if(!(s[0]=='1'&&s[1]=='2')){
   	mt[0]+=1;
   	mt[1]+=2;
	}
   }
   else if(s[len-2]=='A'&&(s[0]=='1'&&s[1]=='2')){
   	mt[0]-=1;
   	mt[1]-=2;
   }
   return mt;
}

int main() {
    char* s = (char *)malloc(512000 * sizeof(char));
    scanf("%s", s);
    int result_size;
	char* result = timeConversion(s);
    printf("%s\n", result);
    return 0;
}

