#include "cs50.h"
#include "cs50.c"
#include <stdio.h>
#include<math.h>

void change(float);
int main(void){
	float cash;
	cash = get_float("Change owed: ");
	if ((change > 0))
    {
        change(cash);
    }
    else
    {
        while (!(cash > 0 ))
        {
            cash = get_float("Change owed: ");
        }
        change(cash);
    }

}
void change(float cash){
	
	int quarter = 25;
	int dime = 10;
	int nickel = 5;
	int penny = 1;
	int count = 0;
	
	int tcash = (int)floor(cash * 100);
	
	if(tcash > 0){	
			while(tcash >= quarter)
			{
				tcash -= quarter;
				count++;
				printf("\n%d %d",tcash,count);
			}
			while(tcash >= dime)
			{
				tcash -= dime;
				count++;
				printf("\n%d %d",tcash,count);
			}
			while(tcash >= nickel)
			{
				tcash -= nickel;
				count++;
				printf("\n%d %d",tcash,count);
			}
			while(tcash >= penny)
			{
				tcash -= penny;
				count++;
				printf("\n%d %d",tcash,count);
			}
	}
	printf("\n%d",count);
}
