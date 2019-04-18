
#include<stdio.h>

int* matrix();
void disp();
void main(){
	int a[2][2];
	disp(matrix(a));
}
int* matrix(int a[2][2]){
	int i,j;
		for(i=0;i<2;i++){
		for(j=0;j<2;j++)
	scanf("%d",(*(a+i)+j));
	}
	return a;
}

void disp(int a[2][2]){
	int i,j;
	for(i=0;i<2;i++){
		for(j=0;j<2;j++)
	printf("%d ",*(*(a+i)+j));
		printf("\n");
	}

}
/*
// The following program works only if your compiler is C99 compatible.
#include <stdio.h>
 
// n must be passed before the 2D array
void print(int,int,int);
int main()
{
    int arr[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int m = 3, n = 3;
    print(m, n, arr);
    return 0;
}

void print(int m, int n, int arr[][n])
{
    int i, j;
    for (i = 0; i < m; i++)
      for (j = 0; j < n; j++)
        printf("%d ", arr[i][j]);
}
 */
