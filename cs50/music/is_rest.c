#include <stdio.h>
#include "cs50.c"
bool is_rest(string);
int main(void){
	string s = get_string(NULL,"Enter String :");
	bool f = is_rest(s);
	if(f)
	printf("\nspace");
	else
	printf("\nNo space") ;
}


bool is_rest(string s)
{
	bool check = false;
	if (strlen(s)==0){
		check = true;
	}
 	return check;
}
