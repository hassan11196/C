#include<stdio.h>
#include<Stdlib.h>
char* dynastring(FILE*);
char** filename(FILE*,int);
int* filenum(FILE*,int);
FILE* inptype(FILE*);
void main(){
	int dec;
	char **names;
	int *numbers;
	FILE *source = NULL;
	printf("\nAUTO FILING\n");
	source = inptype(source);
	
	printf("\nWHAT DO YOU WANT TO INPUT ? 1-NUMBERS 2-NAMES : ");
	scanf("%d",&dec);
	switch(dec){
		int num,i;
		case 1:{
			printf("\nHow many Numbers do you want ?: \n");
			scanf("%d",&num);
			if(source==stdin)
			printf("\nEnter Numbers : ");
			fflush(stdin);
			numbers = filenum(source,num);
			for(i=0;i<num;i++){
				printf("\n%d",numbers[i]);
			}
			break;
		}
		case 2:{
			printf("\nHow many Names do you want ?: \n");
			scanf("%d",&num);
			fflush(stdin);
			if(source==stdin)
			printf("\nEnter Names : ");
			fflush(stdin);
			names = filename(source,num);
			for(i=0;i<num;i++){
				printf("\n%s",names[i]);
			}
			break;
		}
		case 3:{
			exit(0);
			break;
		}
	}
}
FILE* inptype(FILE *source){
	char *fi;
	int type;
	printf("\nDo you want to input manually or pull from file ?\n1-FILING 2-MANAUAL : ");
	scanf("%d",&type);
	switch(type){
		case 1:{
			printf("\nInput File NAME : ");
			fflush(stdin);
			fi = dynastring(stdin);
			sprintf(fi,"%s",fi);
			source = fopen(fi,"r");
			break;
		}
		case 2:{
			source = stdin;
			break;
		}
		default:{
			exit(0);
			break;
		}
		return source;
		
	}
}
int* filenum(FILE *source,int num){
	int* n;
	int i=0,m=1;
	n = (int*)malloc(num*sizeof(int*));
	for(i=0;i<num&&(!feof(source));i++){
		fscanf(source,"%d",&n[i]);
	}
	fclose(source);
	return n;
} 
char** filename(FILE *source,int num){
	char** n;
	int i=0,m=1;
	n = (char**)malloc(num*sizeof(char*));
	for(i=0;i<num&&(!feof(source));i++){
		n[i] = dynastring(source);
	}
	fclose(source);
	return n;
}
char* dynastring(FILE *fp){
	int i=0,m=1;
	char *string = (char*)malloc(m*sizeof(char));
	while(string[i-1]!='\n'){
		string[i] = getc(fp);
		string = (char*)realloc(string,(++m)*sizeof(char));
		i++;
	}
	string = (char*)realloc(string,(--m)*sizeof(char));
	string[i-1] = '\0';
	return string;
}

