#include<stdio.h>
#include<stdlib.h>
	
void input_matrix(int*,int*,int[10][10]);
void transpose_matrix(int*,int*,int[10][10],int[10][10]);
void display_matrix(int*,int*,int[10][10]);

void type_input(int*,int*,int[10][10]);
void finput(int*,int*,int[10][10]);

void main(){
	static int matrix[10][10];
	static int transpose[10][10];
	int r,c;
	//input_matrix(&r,&c,matrix);
	type_input(&r,&c,matrix);
	transpose_matrix(&r,&c,matrix,transpose);
	display_matrix(&r,&c,transpose);
}

void type_input(int* a,int* b,int matrix[10][10]){
	int inp;

	printf("\nDo you want to \n1)manually input numbers \n2)read from file.\nEnter code : ");
	fflush(stdin);
	scanf("%d",&inp);
	switch(inp){
		case 1:{
			input_matrix(a,b,matrix);
			break;
		}
		case 2:{
			finput(a,b,matrix);
			break;
		}
		default:{
			printf("\nINVALID INPUT\n");
			type_input(a,b,matrix);
			break;
		}
	}
}

void finput(int* a,int* b,int matrix[10][10]){
	
	printf("\nUsing filing.\n");
	printf("\nEnter Dimensions of the matrix:\n");
	printf("\nEnter number of rows:");
	scanf("%d",a);
	printf("\nEnter number of coulumns:");
	scanf("%d",b);
	printf("\n\tTranspose of Matrix:\n");
	
	FILE *fp=fopen("numbers.txt","r");
	
	int i,j;
	for(i=0;i<*a;i++){
		for(j=0;j<*b;j++)
		fscanf(fp,"%d",&matrix[i][j]);
	}
	fclose(fp);
	
	printf("\ninput Matrix:\n");
	for(i=0;i<*a;i++){
		for(j=0;j<*b;j++){
			printf("%2d ",matrix[i][j]);
		}
		printf("\n");
	}
}
void input_matrix(int* a,int* b,int matrix[10][10]){
	int i,j;
	
		
	printf("\nUsing manual input.\n");
	
	printf("\nEnter Dimensions of the matrix:\n");
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

