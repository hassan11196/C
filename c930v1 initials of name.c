#include<stdio.h>

void main (void){
	printf("\t\t\tprogram to check name:");
	
	char c1,c2,c3;
	
	
	
	printf("\nenter the initials of your name:");
	printf("\nin the format of A B C:");
	scanf("%c %c %c",&c1,&c2,&c3);
	
	if (c1<=(int)0 || c1>=(int)0 )
	{
	
		printf("\nyou entered integer value instead of character ");
/*			if (c2<=(int)0 || c2>=(int)0 )
			
	{
		printf("\nyou entered integer value instead of character");
			if (c3<=(int)0 || c3>=(int)0 )
	{
		printf("\nyou entered integer value instead of character");
		
	}
	}*/
}
	
	else {
	
	
	if((c1>='a' && c1<='f')||(c1>='A' && c1<='F'))
	{
	printf("\nthe ascii code of the character is %d",c1);
	}
	else{
		printf("\nthe initial of your first name comes after f."); 
	}
	if((c2>='a' && c2<='g')||(c2>='A' && c2<='G'))
	{
	printf("\nthe ascii code of the character is %d",c2);
	}
	else{
		printf("\nthe initial of your first name comes after g."); 
	}
		if((c3>='a' && c3<='h')||(c3>='A' && c3<='H'))
	{
	printf("\nthe ascii code of the character is %d",c3);
	}
	else{
		printf("\nthe initial of your first name comes after h."); 
	}
}
}
	

