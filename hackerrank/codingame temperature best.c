// Read inputs from stdin. Write outputs to stdout.

#include <stdlib.h>
#include <stdio.h>

int main()
{
    int n,i;
    scanf("%d", &n);

    int best = (n == 0) ? 0 : 9999999;
    for (i = 0; i < n; i++)
    {
        int temp;
        scanf("%d", &temp);
        
        if  (  (abs(temp) < abs(best)) 
		||  (abs(temp) == abs(best))  && temp > best
            )
        {
            best = temp;
        }
    }
    
    printf("%d\n", best);
    return 0;
}
