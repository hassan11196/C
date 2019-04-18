#include<Stdio.h>
#include<stdlib.h>

int main(){
	int i,n,n1,n2;
	
	printf("\nEnter Number of String:\n");
	scanf("%d",&n);
	
	char *s1=(char*)calloc(n,n1*sizeof(char));
	
	for(i=0;i<3;i++){
	gets(s1+i);
	}
	for(i=0;i<3;i++){
	puts(s1+i);
	}
	
	
	
	return 0;
}
