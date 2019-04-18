#include <stdio.h>
 
/* function declaration */
int max(int num1, int num2);
 
int main () {

   /* local variable definition */
   int a = 100;
   int b = 200;
   int ret;
 
   /* calling a function to get max value */
   ret = max(a, b);
 
   printf( "Max value is : %d\n", ret );
 

   char str[100];

   printf( "Enter a value :");
   gets( str );

   printf( "\nYou entered: ");
   puts( str );
   
   	char str2[100];
	int i;
	printf("\nenter number:");
	scanf(" %s %d ",str2,&i);
	printf("\nyour number is %s %d:",str2,i);
	
	char str3[100];
	int v;
	 printf( "\nEnter a value :");
      scanf("%s %d", str3, &v);
	  printf( "\nYou entered: %s %d ", str3, v);
	


 
 
 
 
   return 0;
}
 
/* function returning the max between two numbers */
int max(int num1, int num2) {

   /* local variable declaration */
   int result;
 
   if (num1 > num2)
      result = num1;
   else
      result = num2;
 
   return result; 
}
