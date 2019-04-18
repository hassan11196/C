#include<Stdio.h>
#include<stdlib.h>
#include<time.h>
void cont();
int game();
void main(){
	int cnt;
	printf("\tProgram to guess number\n");
	cnt=game();
	printf("\n**%d**",cnt);
	if(cnt==7)
	printf("\nYou LOSE");
	cont();
	
	
}
int game(){
	int num,ran_num,cnt=0;
	srand ( time(NULL) );
	ran_num=rand()%100;
	while(cnt<7){
		printf("guess a number:");
		scanf("%d",&num);
		cnt++;
		if(num==ran_num){
			printf("\nyour guess was correct:%d",num);
			return 0;
		}
		else if(num<ran_num){
			printf("\nentered number is lesser:%d\n",num);
		}
		else if(num>ran_num){
			printf("\nentered number is greater\n:%d",num);
		}
	}
	return cnt;
}
void cont(){
	char dec;
	printf("\nEnter R to Restart\tEnter Q to quit\n");
	scanf(" %c",&dec);
	if(dec =='r'){
	game();
	}
	if(dec=='q'){
	printf("\n-----QUIT-----");
	}	
	else{
		printf("\nInvalid entry.Please enter again");
		cont();
	}
}
