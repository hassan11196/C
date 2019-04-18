#include<Stdio.h>

void main(){
	printf("\t\tprogram to check loops.\n\n");
	
	int n,i,num;
	int sum=0;
	
	printf("\nenter number of integers to be entered.");
	scanf("%d",&n);
	i=1;
	for(printf("\nenter numbers:");i<=n;scanf("%d",&num)){
	
	
		sum = num + sum;
		i++;
	}
	printf("\nsum of the given %d numbers is %d ",n,sum);
	
	float avg=0;
	
	avg=((sum)/n);
	printf("\nthe average of %d numbers is %f",n,avg);
}
