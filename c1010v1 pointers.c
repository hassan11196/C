
#include <stdio.h>
#include <conio.h>
void main(){
	printf("\t\tprogram to point pointers.");
	
	int a,*b,**c,***d;
	
	
	printf("\nenter any number.");
	scanf("%d",&a);
	
	printf("\nnumber entered : %d",a);
	printf("\naddress of number : %d",&a);
	printf("\nnumber entered in address %d is %d",&a,*(&a));
	b = &a;
	c = &b;
	printf("\naddress of second pointer %d is %d",b,c);
	d= &c;
	printf("\naddress of third pointer %d is %d",c,d);
	printf("\n data in third pointer is %d",*d);
	printf("\n data in second pointer is %d",*c);
	printf("\n data in first pointer is %d",*b);

	
	getch();
	
	
	
}

