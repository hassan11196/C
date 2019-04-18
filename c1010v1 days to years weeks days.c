#include <stdio.h>

int yeari(int n);
void main (){
	printf("\t program to printf years weeks and days from input of days.");
	int n,year,week,day;
	
	printf("\nenter number of days.");
	scanf("%d",&n);
	
	yeari(n);

}
int yeari(int n){
	
	int year1,week1,day1;
	printf("\nnumber of days entered is %d.",n);
	year1 = n / 365;
	printf("\n years: %d",year1);
	week1 = (n % 365) / 7;
	printf("\n weeks: %d",week1);
	day1 = ((n % 365) % 7);
	printf("\n days: %d",day1);
	
}
