#include<stdio.h>
#include<stdlib.h>	

void input_matrix(int*,int*,int[10][10]);
void transpose_matrix(int*,int*,int[10][10],int[10][10]);
void display_matrix(int*,int*,int[10][10]);

void main(){
	static int matrix[10][10];
	static int transpose[10][10];
	int r,c;
	input_matrix(&r,&c,matrix);
	transpose_matrix(&r,&c,matrix,transpose);
	display_matrix(&r,&c,transpose);
}

void input_matrix(int* a,int* b,int matrix[10][10]){
	int i,j;
	printf("\nEnter Dimensions of the matrix:");
	printf("\nEnter number of rows:");
	scanf("%d",a);
	printf("\nEnter number of coulumns:");
	scanf("%d",b);
	printf("\n\tTranspose of Matrix:\n");
	
	for(i=0;i<*a;i++){
		for(j=0;j<*b;j++){
			printf("\nEnter value %d%d : ",i+1,j+1);
			scanf("%d",&matrix[i][j]);
		}
	}
	printf("\ninput Matrix:\n");
	for(i=0;i<*a;i++){
		for(j=0;j<*b;j++){
			printf("%2d ",matrix[i][j]);
		}
		printf("\n");
	}
}
void transpose_matrix(int* a,int* b,int matrix[10][10],int transpose[10][10]){
	int i,j;
	for(i=0;i<*b;i++){
		for(j=0;j<*a;j++){
			transpose[i][j]=matrix[j][i];
		}
	}
	
}
void display_matrix(int* a,int* b,int transpose[10][10]){
	int i,j;
	printf("\nTranspose Matrix:\n");
	for(i=0;i<*b;i++){
		for(j=0;j<*a;j++){
			printf("%2d ",transpose[i][j]);
		}
		printf("\n");
	}
}

