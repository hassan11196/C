#include<stdio.h>

int main(void){
int count1=0,count2=0;

char ch;

printf("enter sentence:");

while((ch=getche())!='\r'){
	if ((ch == 'a'||ch == 'e'||ch == 'i'||ch == 'o'||ch ==  'u')){
	count1++;
	}
	else{
	count2++;}
	
	}
	
	printf("hence vowels = %d ,	consonants = %d" ,count1,count2);
	return 0;
	


}
