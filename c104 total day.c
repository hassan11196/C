#include <stdio.h>

void main (){
	
	printf("\t\tprogram to find day on first day on any year");
	
	int leapday,yr,firstday;
	long int normalday,totalday; 
	
	printf("\nenter year:");
	scanf("%d",&yr);
	
	printf("year entered is: %d",yr);
	
	normalday = (yr-1) * 365;
	leapday = (yr-1)/4 -(yr-1)/100 + (yr-1)/400;
	
	totalday = normalday + leapday;
	firstday = totalday % 7;
	
	if (firstday == 0){
		printf("\nday is monday");
	}
	if (firstday == 1){
		printf("\nday is tuesday");
	}
	if (firstday == 2){
		printf("\nday is wednesday");
	}
	if (firstday == 3){
		printf("\nday is thursday");
	}
	if (firstday == 4){
		printf("\nday is friday");
	}
	if (firstday == 5){
		printf("\nday is saturday");
	}
	if (firstday == 6){
		printf("\nday is sunday");
	}
	
	
	getch();
	
	
	
	
}
