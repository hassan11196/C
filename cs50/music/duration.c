#include <stdio.h>
#include "cs50.c"
int duration(string s);
int main(void){
	string s = get_string(NULL,"Enter String :");
	int dur = duration(s);
	printf("\n dur : %d",dur);
}
int duration(string fraction)
{
    // TODO
    int a = (int)fraction[0] - 48;
    int b = (int)fraction[2] - 48;
    printf("\n%s",fraction);
    int c = 8 / b ;
    if(c==1){
    	return a;
	}
	else{
		return c;
	}
}



