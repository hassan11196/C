#include<stdio.h>

void main(void)
{
	printf("\t\t\tprogram to use arrays");
	int i=0,n=0,sum=0,average;
	int array[n];
	printf("\nenter number of marks to be entered:");
	scanf("%d",&n);
	
	
	if(n==0){
		printf("\nplease enter a number greater than 0.");
		}
	else{
	
	
	
	printf("\nnumber of marks to be entered is %d",n);
	
	
	for(i=0;i<n;i++)
	{
		
		printf("\nenter %d exam marks: ",i+1);
		scanf("%d",&array[i]);
		sum+=array[i];
		printf("sum of numbers till now is %d",sum);
		
		
		
	}
		average=sum/n;
	
	printf("\n\t\tAverage: %d",average);
	printf("\n\t\tsum of all marks: %d",sum);
	
	
}

getch();
	
	
}
