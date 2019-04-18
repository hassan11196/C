#include<stdio.h>
#include<stdlib.h>
int* filenum(FILE*,int);
void swap(int*,int*);
void selection_sort(int*,int);
void binary(int,int,int,int*);

int main(void){
	int num,i;
	int *numbers;
	int search;
	printf("\n\t__BINARY SEARCH__\n");
	printf("\nHow many Numbers do you want in array ?: \n");
	scanf("%d",&num);
	printf("\nEnter Numbers : \n");
	numbers = filenum(stdin,num);
	printf("\nnumbers in array of size %d:\n",num);
	for(i=0;i<num;i++){
		printf("\n%d",numbers[i]);
	}
	selection_sort(numbers,num);
	printf("\nSorted Array:\n");
	for(i=0;i<num;i++){
		printf("\n%d",numbers[i]);
	}
	printf("\nEnter Number you want to search : ");
	scanf("%d",&search);
	binary(0,num-1,search,numbers);
	return 0;
}
int* filenum(FILE *source,int num){
	int* n;
	int i=0,m=1;
	n = (int*)malloc(num*sizeof(int*));
	for(i=0;i<num;i++){
		fscanf(source,"%d",&n[i]);
	}
	return n;
}
void selection_sort(int* array,int num){
	
	int i,j,temp,min;	
	for(i=0;i<num-1;i++){
		min=i;
		for(j=i+1;j<num;j++){
			if(array[j]<array[min]){
				swap(&array[j],&array[min]);
			}
		}
	}
}
void swap(int *num1,int *num2){
	int tnum;
	tnum=*num1;
	*num1=*num2;
	*num2=tnum;
}

void binary(int start,int end,int search,int* numbers){
	if(start > end ){
		printf("\n%d is not present in array.\n",search);
	}
	else{
		int middle = (start + end) / 2;
		if(numbers[middle] == search){
			printf("\n%d is present at location %d of array.\n",search,middle+1);
			return;
		}
		else if(numbers[middle] > search){
			end = middle - 1;
		}
		else if(numbers[middle] < search){
			start = middle + 1;
		}
		binary(start,end,search,numbers);
		return;
	}
}
