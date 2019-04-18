#include<stdio.h> /* required for basic functions as of 9/11*/
#include<limits.h>  /*required for finding storage size of int as of 9/11 */
#include<float.h>/*The header file float.h defines macros that allow you to use these values and other details about the binary representation of real numbers in your programs.*/


#define length 10
#define breath 20
#define height 30
#define newline '\n'
extern int a;

int max(int num1, int num2);
 
int main () {
	
	/* part 1 */
	printf("hello sharply cunning world of sadness and despair\n");
	
	/*part 2 data types*/
	printf("storage size for int: %d \n",sizeof(int));
	printf("storage size for char: %d \n",sizeof(char));
	printf("storage size of float: %d \n",sizeof(float));
	printf("maximum value of float: %e \n",FLT_MAX);
	printf("minimum value of float: %e \n",FLT_MIN);
	printf("precision value: %d \n",FLT_DIG);
	/*part 3 variables*/
	int a,b,c;
	float d,e,f;
	a=9;
	b=10;
	
	d=100;
	e=3;
	
	c=a+b;
	f=d/e;
		printf("the sum of a and b is %d \n",c);
		printf("the quotiont of d divide by e is %f \n",f);
	/*part 3 constants*/
	printf("english language class is on tuesday\t");
	printf("computer lab is on wednesday\n");
	
	int area;
	int volume;
	
	area = length * breath;
	printf("calculated total area: %d \n",area);
	volume = length * breath * height;
	printf("calculated total volume: %d\n",volume);
	printf("%c",newline);
	

	
	
	/*part 4 operators*/
	int q,w,r;
	q=101;
	w=100;
	e=q%w ;
	printf("the modulus of q and w %d \n",e );
	q++;
	printf("q: %d \n",q);
	q++;
	printf("q: %d \n",q);
	printf("%c",newline);
	printf("w: %d \n",w);
	w++;
	printf("w: %d \n",w);
	w++;
	printf("w: %d \n",w);
	printf("%c",newline);
	
	int t,y,u;
	t=9;
	y=9;
	t==y;
	
	/*part 5 function*/
	int p,o;
		int result;
	p=6;
	o=99;	
	if (p>o)
	result = p;
	else 
	result = o;
	
	printf("result is %d \n",result);
	
	p=10;
	o=11;
	int ringo;
	ringo=max(p,o);
	printf("the maximum number between o and p is: %d \n",ringo);
	
	
	/*part 6 suddenly i am doing input output*/


	char str[100];
	printf( "\nEnter a value :");
	gets( str );
	
	printf( "\nYou entered: ");
	puts( str );
	
	char str1[100];

   printf( "\nEnter a value :");
   gets( str1 );

   printf( "\nYou entered: ");
   puts( str1 );
   
   
   	int mango;
	
	printf("\nenter any value:");
	
	mango =getchar();
	
	printf("\nthe value you had previously typed is :");
	putchar(mango);
	
	printf("\n");
	/*apparently char only takes the first digit or character as input*/
	
	
	
    char str3[100];
	int v;
	 printf( "\nEnter a value :");
      scanf("%s %d",str3,&v);
	  printf( "\nYou entered: %s %d",str3,v);
	

	char str2[100];
	int i;
	printf("\nenter number:");
	scanf("%s %d",str2,&i);
	printf("\nyour number is: %s %d",str2,i);
	

	
	return 0;
	

	
}
/*inserted in part 5 functions, to find larger of two values*/
int max(int num1, int num2) {

   /* local variable declaration */
   int result;
 
   if (num1 > num2)
      result = num1;
   else
      result = num2;
 
   return result; 
}
	


	


	
		
	

	/*no idea why this is necessary but it is apparently*/
	

	

	
