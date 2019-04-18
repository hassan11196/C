#include<Stdio.h>
#include<string.h>
int main()
{
	
	char a[10][25],temp[10];
	int r,c,i=0,j=0,k=0;
	char t;
	printf("Enter number of string:");
	scanf("%d",&r);
	
	for (i=0;i<r;i++)
	{
		printf("Enter String # %d \n",i+1);
		scanf("%s",a[i]);
	}
	printf("\n Inputted Strings : \n");
	for (i=0;i<r;i++)
	{
		printf("\nString # %d" , i +1 );
		puts(a[i]);
	}
	for(i=0;i<r;i++)
	{
		for(j = 0; j < strlen(a[i]); j++){
			for(k = 0 ; k < strlen(a[i]);k++)
			{
				if((((int)a[i][k]) > ((int)a[i][k+1])) && (a[i][k] != '\0' && a[i][k+1] != '\0'))
        		{
                	t = a[i][k];
                	a[i][k] = a[i][k+1];
                	a[i][k+1] = t;
				}
			}
		}
			
	}

	printf("\n SORTED STRINGS : \n");
	for (i=0;i<r;i++)
	{
		printf("%d %s ",i+1,a[i]);
		printf("\n");
	}
}
