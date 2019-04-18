#include "cs50.h"
#include "cs50.c"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(int argc,string arg[])
{	
	if(argc >2 )
		return 1;
	int k = atoi(arg[1]);
	string s = get_string("Enter string: ");
	string plain = get_string("plaintext: ");
	string temp = plain;
	for (int i = 0; i < strlen(plain); i++)
	{
		if (isalpha (plain[i]))
		{
			temp[i] = (char)(plain[i] + k);
		}
	}
	printf("ciphertext: %s",temp);
   
	return 0;
}
