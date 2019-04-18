#include <stdio.h>
#include<math.h>

void main (void)

{
	printf("program to solve quadratic equation:\n");
	
	double a,b,c;
	double determinant;
	double real_part,img_part;
	double x_1,x_2;
	
	printf("enter the co-effecients of the equation:\n");
	scanf("%lf %lf %lf",&a,&b,&c);
	printf("the equation you entered is: %.0lfx^2 + %.0lfx + %.0lf\n\n",a,b,c);
	determinant= b*b - 4*a*c;
	printf("determinant of the equation: %.0lf\n\n",determinant);
	
	if (determinant == 0){
		real_part = -b/(2*a);
		printf("the single root of the eqaution is x= %.2lf\n",real_part);
	}
	if (determinant < 0){
		real_part = -b/(2*a);
		img_part  = (sqrt(-determinant))/(2*a);
		printf("the roots of the equation are:\n");
		printf("x= %.2lf + %.2lfi\n",real_part,img_part);
		printf("x= %.2lf - %.2lfi\n",real_part,img_part);
		
	}
	if (determinant > 0){
		real_part = -b/2*a;
		img_part = (sqrt(determinant))/(2*a);
		x_1 = real_part + img_part;
		x_2 = real_part - img_part;
		printf("the roots of the equation are:\n");
		printf("x= %.2lf\n",x_1);
		printf("x= %.2lf\n",x_1);	
	}
	getch();
	
	
	
	
	
}
