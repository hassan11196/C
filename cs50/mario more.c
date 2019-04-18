#include "cs50.c"
#include<stdio.h>

void pattern(int);
int main()
{

    int row;
    row = get_int("Height: ");
    // Checks condition
    if ((row >= 0 && row < 24))
    {
        pattern(row);
    }
    else
    {
        while (!(row >= 0 && row < 24))
        {
            row = get_int("Height: ");
        }
        pattern(row);
    }




}
void pattern(int row)
{	int i,j,k;
    // Loop for rows
    for(i = 0;i < row; i++)
    {
        // Loop for spaces
        for ( k=0;k < row-i-1; k++)
        {
            printf(" ");
        }
        // Loop for #
        for ( j= 0;j <= i; j++)
        {
            printf("#");
        }
        printf(" ");
        for ( j = 0;j <= i; j++)
        {
            printf("#");
        }


        printf("\n");
    }
}
