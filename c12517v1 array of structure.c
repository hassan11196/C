#include<stdio.h>
//void search(int,library);
void main(){
	
	int i,j,size;
	
	printf("\nEnter number of students : ");
	scanf("%d",&size);
	
	struct library {
		char name[50];
		int age;
		int year;
		int id_no;
		char father_name[50];
	};
	
	struct library database[size];
	
	for(i=0;i<size;i++){
		printf("\n\n\n STUDENT # %d \n\n",i+1);
		printf("\nEnter your name : ");
		fflush(stdin);
		gets(database[i].name);
		printf("\nEnter Father Name : ");
		gets(database[i].father_name);
		printf("\nEnter your age : ");
		scanf("%d",&database[i].age);
		printf("\nEnter Year of study : ");
		scanf("%d",&database[i].year);
		printf("\nEnter Student ID : ");
		scanf("%d",&database[i].id_no);
		printf("\nPress any key to continue to next student ....");
		getch();
		system("cls");
		
	}
	system("cls");
	for(i=0;i<size;i++){
		printf("\n\n\n STUDENT # %d \n\n",i+1);
		printf("\nNAME : %s",(database[i].name));
		printf("\nFTHER NAME : %s",database[i].father_name);
		printf("\nAGE : %d",database[i].age);
		printf("\nYear Of Study : %d",database[i].year);
		printf("\nStudent ID : %d",database[i].id_no);		
	}
	//search(size,database);
	
	
	
}
/*
void search(int size,struct library databse[]){
	char temp_name[50];
	int i;
	printf("\nEnter Name of student you want to delete : ");
	gets(temp_name);
	for(i=0;i<size;i++)
}
*/
