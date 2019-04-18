#include<stdio.h>
#include<Stdlib.h>


void num_input(int**,int*);
void type_input(int*,int);
void code_input(int*,int);
void input(int*,int);
void finput(int*,int);
void complexity(char*,char*,char*);
void output(int*,int*,int);
void swap(int*,int*);
void checker(int*,int);
void* original(int*,int);

void selection_sort(int*,int);
void bubble_sort(int*,int);
void insertion_sort(int*,int);

void main(){
	int *array=NULL,num;
	printf("\nSorting Algoritmhs for numbers : ");
	num_input(&array,&num); 
	type_input(array,num);
	code_input(array,num);
}

void num_input(int** array,int* num){
	printf("\nEnter Number of inputs:");
	scanf("%d",num);
	*array=(int*)malloc(*num*sizeof(int));
}

void type_input(int* array,int num){
	int inp;
	printf("\nDo you want to \n1)manually input numbers \n2)read from file.\nEnter code : ");
	scanf("%d",&inp);
	switch(inp){
		case 1:{
			input(array,num);
			break;
		}
		case 2:{
			finput(array,num);
			break;
		}
		default:{
			printf("\nINVALID INPUT\n");
			type_input(array,num);
			break;
		}
	}
}

void input(int* array,int num){
	int i;
	printf("\nEnter %d numbers :\n",num);
	for(i=0;i<num;i++){
		scanf("%d",(array + i));
	}
}

void finput(int* array,int num){
	FILE *fp=fopen("numbers.txt","r");
	int i,total;
	for(i=0;i<num;i++){
		fscanf(fp,"%d",(array + i));
	}
	total=i;
	fclose(fp);
	for(i=0;i<total;i++){
		printf("\t%2d\n",array[i]);
	}
}

void code_input(int* array,int num){
	int code;
	printf("\nInput Code for sorting : ");
	scanf("%d",&code);
	system("cls");
	
	switch(code){
		case 1:{
			selection_sort(array,num);
			break;
		}
		case 2:{
			bubble_sort(array,num);
			break;
		}
		case 3:{
			insertion_sort(array,num);
			break;
		}
		default:{
			printf("\nINVALID CODE\n");
			code_input(array,num);
			break;
		}
	}
}

void output(int* OA,int* array,int num){
	int i;
	printf("Original Array  Sorted Array.\n");
	for(i=0;i<num;i++){
		printf("\t%2d\t%2d\n",OA[i],array[i]);
	}
}

void complexity(char* a,char* b,char* c){
	printf("\nTime complexity:\t Best: %c(%s) Average: %c(%s) Worst: %c(%s)\n\n",234,a,237,b,'O',c);
}

void swap(int *num1,int *num2){
	int tnum;
	tnum=*num1;
	*num1=*num2;
	*num2=tnum;
}

void checker(int* array,int num){
	int i,flag=0;
	for(i=0;i<num-1;i++){
		if(array[i]>array[i+1]){
			flag+=i;
		}
	}
	if(flag==0){
		printf("\nArray is Properly Sorted.\n");
	}
	else{
		printf("\nArray is NOT Properly Sorted.\nCheck %d",i);
	}
	
}

void* original(int* array,int num){
	int *OA=(int*)malloc(num*sizeof(int));
	int i;
	for(i=0;i<num;i++){
		OA[i] = array[i];
	}
	return OA;
	
}

void selection_sort(int* array,int num){
	
	int i,j,temp,min;
	int *OA = (int*)original(array,num);
	
	printf("\n\t\tSelection Sort.\n");
	for(i=0;i<num-1;i++){
		min=i;
		for(j=i+1;j<num;j++){
			if(array[j]<array[min]){
				swap(&array[j],&array[min]);
			}
		}
	}
	complexity("n^2","n^2","n^2");
	output(OA,array,num);
	checker(array,num);
}

void bubble_sort(int* array,int num){
	int i,j,temp,min;
	int swap_check;
	int *OA = (int*)original(array,num);
	
	printf("\n\t\tBubble Sort.\n");
	for(i=0;i<num-1;i++){
		swap_check=0;
		for(j=0;j<num-i-1;j++){
			if(array[j]>array[j+1]){
				swap(&array[j],&array[j+1]);
				swap_check++;
			}
		}
		if(swap_check==0){
			break;
		}
	}
	complexity("n","n^2","n^2");
	output(OA,array,num);
	checker(array,num);
}

void insertion_sort(int* array,int num){
	int i,j,temp,min;
	int key;
	int *OA = (int*)original(array,num);
	
	printf("\n\t\tInsertion Sort.\n");
	for(i=0;i<num;i++){
		key=array[i];
		j=i-1;
		while(j>=0&&array[j]>key){
			array[j+1]=array[j];
			j--;
		}
		array[j+1]=key;
	}
	complexity("n","n^2","n^2");
	output(OA,array,num);
	checker(array,num);
}

