#include<stdio.h>
#include<stdlib.h>
	
void size_matrix(int*,int*,int***,int***);
void input_matrix(int*,int*,int**);
void transpose_matrix(int*,int*,int**,int**);
void display_matrix(int*,int*,int**);

void type_input(int*,int*,int**);
void finput(int*,int*,int**);

void main(){
	static int r,c;
	int **matrix,**transpose;
	
	size_matrix(&r,&c,&matrix,&transpose);
	type_input(&r,&c,matrix);
	transpose_matrix(&r,&c,matrix,transpose);

}
void size_matrix(int* a,int* b,int*** matrix,int*** transpose){
	int i;
	printf("\nEnter Dimensions of the matrix:\n");
	printf("\nEnter number of rows:");
	scanf("%d",a);
	printf("\nEnter number of coulumns:");
	scanf("%d",b);
	
	*matrix = (int**)malloc((*a)*(*b) * sizeof(int));
	*transpose = (int**)malloc((*a)*(*b) * sizeof(int));
}
void type_input(int* a,int* b,int** matrix){
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

void finput(int* a,int* b,int **matrix){
	
	printf("\nUsing filing.\n");
	
 	FILE *fp=fopen("numbers.txt","r");
	
	int i,j;
	for(i=0;i<*a;i++){
		matrix[i] = (int*)malloc((*b)*(*a)*sizeof(int));
	}
	for(i=0;i<*a;i++){
		for(j=0;j<*b;j++)
		fscanf(fp,"%d",&matrix[i][j]);
	}
	fclose(fp);
	
		system("cls");
		printf("\ninput Matrix:\n");
		display_matrix(a,b,matrix);
}
void input_matrix(int* a,int* b,int **matrix){
	int i,j;
	printf("\nUsing manual input.\n");
	
	printf("\n\tTranspose of Matrix:\n");
	for(i=0;i<*a;i++){
		matrix[i] = (int*)malloc((*b)*(*a)*sizeof(int));
	}
	for(i=0;i<*a;i++){
		for(j=0;j<*b;j++){
			printf("\nEnter value %d%d : ",i+1,j+1);
			scanf("%d",&matrix[i][j]);
		}
	}
		system("cls");
		printf("\ninput Matrix:\n");
		display_matrix(a,b,matrix);
}
void transpose_matrix(int* a,int* b,int** matrix,int** transpose){
	int i,j;
	for(i=0;i<*b;i++){
		transpose[i] = (int*)malloc((*b)*(*a)*sizeof(int));
	}
	for(i=0;i<*b;i++){
		for(j=0;j<*a;j++){
			transpose[i][j]=matrix[j][i];
		}
	}
	printf("\nTranspose matrix:\n");
	display_matrix(b,a,transpose);
}
void display_matrix(int* a,int* b,int **matrix){
	int i,j;
	for(i=0;i<*a;i++){
		for(j=0;j<*b;j++){
			printf("%2d ",matrix[i][j]);
		}
		printf("\n");
	}
}

