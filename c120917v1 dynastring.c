#include<Stdio.h>
#include<stdlib.h>
#include<ctype.h>
char* dynastring(FILE *fp);
void main(){
	printf("\nPROGRAM TO DYNAMICLY ALLOT MEMORY TO A STRING :");
	char *s;
	printf("\nEnter String : ");
	s = dynastring(stdin);
	printf("\nEntered String : %s\n",s);
	printf("\n%d\n",_msize(s));
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
