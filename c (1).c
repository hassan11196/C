#include<stdio.h> /* required for basic functions as of 9/11*/
#include<limits.h>  /*required for finding storage size of int as of 9/11 */
#include<float.h>/*The header file float.h defines macros that allow you to use these values and other details about the binary representation of real numbers in your programs.*/
extern int a;

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
	printf("computer lab is on wednesday\t");
		
	
	return 0;
	/*no idea why this is necessary but it is apparently*/
	
}
