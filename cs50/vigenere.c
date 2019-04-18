
#include "cs50.h"
#include "cs50.c"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(int argc,string arg[])
{
	if (argc > 2 || argc ==1)
		return 1;
		
		string *hi = (string*)malloc(sizeof(string*));
		string plain = get_string(hi,"plaintext: ");
		
		//string plain = get_string("plaintext: ");
		string key = arg[1];
		int k = strlen(key) ;
		string temper = plain;
		int c = 0;
	

	for (int i = 0; i < strlen(plain); i++)
	{
		if (isalpha (plain[i]))
		{
			if(islower(plain[i]))
			{
				temper[i] = (char)(((((int)temper[i] - 96) + ( (islower(key[c % k])) ? (key[c % k]-97):(key[c % k]-65))) % 26)+96);
			}
			if(isupper(plain[i]))
			{
				temper[i] = (char)(((((int)temper[i] - 64) + ( (islower(key[c % k])) ? (key[c % k]-97):(key[c % k]-65) )) % 26)+64);
			}
			c++;
		}
	}
	printf("ciphertext: %s\n",temper);

	return 0;
}
