#include<stdio.h>
#include<stdlib.h>

void main(){
	
	printf("\nMulti dimensional dynamic array:");
	
	int i,j,num,**arr,*array,row,col;
	
	//*arr = (int*)malloc(row*sizeof(int));
	array = (int*)malloc(row*col*sizeof(int));
	
	printf("\nEnter number of rows:");
	scanf("%d",&row);
	printf("\nEnter number of columns:");
	scanf("%d",&col);
	
	printf("\nEnter Elements in array:");
	
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("\nEnter value for location %d%d:",(i+1),(j+1));
			scanf("%d",array + i*col + j);
		}
	}
	
	printf("\nElements in array:");
	
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			
			//printf("\n%d",i);
			printf("\nvalue in location : %d%d is : %d with physical address :",(i+1),(j+1),*(array + i*col + j));
			printf("%d",(array + i*col + j));
		
		}
	}
	printf("\n\n");
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("%2d",*(array + i*col + j));
		}
		printf("\n");
	}
	
}
