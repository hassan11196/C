#include<stdio.h>
#include<stdlib.h>

void main(){
	
	printf("\nMulti dimensional dynamic array:");
	
	int i,j,num,*array,row,col;
	
	int **arr = (int**)malloc(row*sizeof(int*));
	//int *a[row]
	array = (int*)malloc(row*col*sizeof(int));
	
	printf("\nEnter number of rows:");
	scanf("%d",&row);
	printf("\nEnter number of columns:");
	scanf("%d",&col);
	
	//printf("\n%d\n",sizeof(int*));
	for(i=0;i<row;i++){
		printf("\n%d",((arr + i) + j));
	}
	
	printf("\nEnter Elements in array:");
	
	//int cnt=0;
	for(i=0;i<row;i++){
		//arr[i] = &array[i];
		//arr[i] = (array + i);
		arr[i] = (int*)malloc(col*sizeof(int));
		printf("*%d*",&arr[i]);
		for(j=0;j<col;j++){
			printf("\nEnter value for location %d%d:",(i+1),(j+1));
			//arr[i][j]=cnt++;
			scanf("%d",*(arr + i) + j );
		}
	}
	
	printf("\nElements in array:");
	
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("\nvalue in location : %d%d is : %d physical : %d and : %d",(i+1),(j+1),*(*(arr + i)+j),(*(arr + i)+j),((arr + i)+j));
		}
	}
	
	printf("\n\n");
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("%2d",*(*(arr + i)+j));
		}
		printf("\n");
	}
	

}
