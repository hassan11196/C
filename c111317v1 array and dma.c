#include<stdio.h>
#include<stdlib.h>

void main(){
	
	int num,i=0,j;
	int huj[5][5];
	printf("\nEnter length of string:");
	scanf("%d",&num);
	char* s=(char*)malloc(num* sizeof(char));
	//char* s = (char *)malloc(10240 * sizeof(char));
	
	/*for(j=0;j<num-1;j++){
		s[j]=(j+65);
	}*/
	fflush(stdin);
	printf("\n\n\nEnter String:");
	gets(s);
	
	while(s[i]!='\0'){
		printf("%c",s[i]);
		i++;
	}
		printf("\n%s",itoa(num,s,2));
	for(i=0;i<1;i++){
		for(j=0;j<5;j++){
			scanf("%d",&huj[i][j]);
		}
	}

	
		for(i=0;i<1;i++){
		for(j=0;j<5;j++){
			printf("%d",huj[i][j]);
		}
	}

}
