#include<stdio.h>
main()
{
	int i,j,n,k=1;
	printf("enter rows:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=(2*n)-1;j++)
		{
			if(j<=i||j>=(2*n)-i)
			{
				
				if(j<=i){
					printf("%d",k);
				}
			    	if(j>=(2*n)-i){
						if(j==n&&i==n){
							continue;
							}
					printf("%d",--k);
					k++;
				}
				
				if(j<=((2*n)/2))
				{
				
				k++;
		}
		else if(j>=((2*n)/2))
		{
			k--;
		}
		
			}
			else
			{
				
				printf(" ");
			

		}
	}
		printf("\n");
}}
