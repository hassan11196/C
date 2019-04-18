#include<Stdio.h>

void main(){
	
	struct library{
		int num_books;
		char name_books[10];
	}lib;
	
	printf("\nEnter number of books: ");
	scanf("%d",&lib.num_books);
	printf("\nEnter name of book: ");
	scanf("%s",&lib.name_books);
	
	printf("\nNumber of books : %d",lib.num_books);
	printf("\nName of book : %s",lib.name_books);

}
