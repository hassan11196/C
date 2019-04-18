
#include "cs50.c"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(int argc,string arg[])
{	
	if (argc > 2)
		return 1;
	int k = atoi(arg[1]);
	//int k = 1;
		k %= 26;
		string *hi = (string*)malloc(sizeof(string*));
		string plain = get_string(hi,"plaintext: ");
		string temper = plain;
	
	
	for (int i = 0; i < strlen(plain); i++)
	{
		if (isalpha (plain[i]))
		{
			if(islower(plain[i]))
			{
				temper[i] = (char)(((((int)temper[i] - 96)+k)%26)+96);
			}
			if(isupper(plain[i]))
			{
				temper[i] = (char)(((((int)temper[i] - 64)+k)%26)+64);
			}
			
		}
	}
	printf("ciphertext: %s",temper);
   
	return 0;
}
