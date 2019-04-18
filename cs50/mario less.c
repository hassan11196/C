// Makes a Mario like tower
#include<stdio.h>
void pattern(int);
int main(){

    int row;
    printf("Height: ");
    scanf("%d",&row);
    if((row >= 0 && row < 24))
    {
         pattern(row);
    }
    else
    {
         while(!(row >= 0 && row < 24))
        {
        fflush(stdin);
        printf("Height: ");
        scanf("%d",&row);
        }
        pattern(row);
    }




}
void pattern(int row){
	int i,j,k;
     for(i=0;i < row;i++)
        {
            for(k=0;k < row-i-1;k++)
            {
                printf(" ");
            }
            for(j=0;j <= i+1;j++)
            {
                printf("#");
            }
            printf("\n");
        }
}
