#include "cs50.h"
#include "cs50.c"
#include <stdio.h>

int main(void){
	int i=0,sum,sum1=0,sum2=0,l,m;
	long long num ,temp ,card;
	num = get_long_long("Number: ");
	temp = num;
	while (temp > 1)
	{
		
		if(i % 2 == 0)
		{
			sum2 += temp % 10;
		}
		else
		{
			l = (2 * (temp % 10));
			m=0;
			while (l > 0)
			{
				m += l % 10;
				l /= 10;
			}
			sum1 += m; 
		}
		printf("\n sum %lld : sum1 %lld sum2 %lld :i = %dtemp = %d",sum,sum1,sum2,i,temp%10);
		card = temp;
		temp /= 10;
		i++;
	}
	sum = sum1 + sum2;
	printf("\n sum %lld : sum1 %lld sum2 %lld :i = %d\n",sum,sum1,sum2,i);
	if (sum % 10){
		printf("INVALID\n");
	}
	else{
		if (card == 3)
			printf("AMEX\n");
		else if (card == 5)
			printf("MASTERCARD\n");
		else if (card == 4)
			printf("VISA\n");
		else 
			printf("INVALID\n");
	}
	return 0;
}
