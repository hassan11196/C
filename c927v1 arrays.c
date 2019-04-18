#include <stdio.h>
void main (void)
{
	printf("\t\tprogram to implement arrays");
	
	int marks[10],i,n,sum=0,average,counter=1;
	
	printf("\nenter any number:");
	scanf("%d",&n);
	if (n==0)
	{
			
	printf("\nbhai 0 q dal raha hai?");	
}
else{

	for(i=0;i<n;++i)
	
	{
		
	printf("\nenter %d number:",counter);
	printf("\nenter %d number:",i+1); //number input using i
	
	scanf("%d",&marks[i]);
	sum+=marks[i];
	printf("sum at this point: %d",sum);
	++counter;
	
	
	}
	average=sum/n;
	printf("\n\t\taverage:%d",average);
	printf("\n\t\tsum of all numbers %d",sum);
}

	
	getch();	
	
	
	
	
}
