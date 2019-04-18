#include<stdio.h>

void sppv1(int a);
void sppv2(int a);
void sppv3(int a);
void sppv4(int a);
void sppv5(int a);
void sppv6(int a);
void sppv7(int a);
void sppv8(int a);
void sppv9(int a);
void sppv10(int a);
void sppv11(int a);
void sppv12(int a);
void sppv13(int a);
void sppv14(int a);
void sppv15(int a);
void sppv16(int a);
void sppv17(int a);
void sppv18(int a);
void sppv19(int a);
void sppv20(int a);
void sppv21(int a);
void sppv22(int a);
void sppv23(int a);
void sppv24(int a);
void sppv25(int a);
void sppv26(int a);
void sppv27(int a);
void sppv28(int a);
void sppv29(int a);
void sppv30(int a);
void sppv65(int a);
void sppv66(int a);
void sppv67(int a);
void sppv68(int a);

int i,j;
void main(){
	
	int num,code;
	printf("\t\tprogram to print patterns:\n");
	
	printf("enter number of rows:");
	scanf("%d",&num);
	
	printf("enter code of pattern:");
	scanf("%d",&code);
	
	switch(code){
		case 1:{
			sppv1(num);
			break;
		}
		case 2:{
			sppv2(num);
			break;
		}
		case 3:{
			sppv3(num);
			break;
		}
		case 4:{
			sppv4(num);
			break;
		}
		case 5:{
			sppv5(num);
			break;
		}
		case 6:{
			sppv6(num);
			break;
		}
		case 7:{
			sppv7(num);
			break;
		}
		case 8:{
			sppv8(num);
			break;
		}
		case 9:{
			sppv9(num);
			break;
		}
		case 10:{
			sppv10(num);
			break;
		}
		case 11:{
			sppv11(num);
			break;
		}
		case 12:{
			sppv12(num);
			break;
		}
		case 13:{
			sppv13(num);
			break;
		}
		case 14:{
			sppv14(num);
			break;
		}
		case 15:{
			sppv15(num);
			break;
		}
		case 16:{
			sppv16(num);
			break;
		}
		case 17:{
			sppv17(num);
			break;
		}
		case 18:{
			sppv18(num);
			break;
		}
		case 19:{
			sppv19(num);
			break;
		}
			case 20:{
			sppv20(num);
			break;
		}
		case 21:{
			sppv21(num);
			break;
		}
		case 22:{
			sppv22(num);
			break;
		}
		case 23:{
			sppv23(num);
			break;
		}
		case 24:{
			sppv24(num);
			break;
		}
		case 25:{
			sppv25(num);
			break;
		}
		case 26:{
			sppv26(num);
			break;
		}
		case 27:{
			sppv27(num);
			break;
		}
		case 28:{
			sppv28(num);
			break;
		}
		case 29:{
			sppv29(num);
			break;
		}
		case 30:{
			sppv30(num);
			break;
		}
		case 65:{
			sppv65(num);
			break;
		}
		case 66:{
			sppv66(num);
			break;
		}
		case 67:{
			sppv67(num);
			break;
		}
		case 68:{
			sppv68(num);
			break;
		}
		default:{
			printf("please enter a valid pattern.");
			break;
		}
	}
	
}
void sppv1(int a){
	for(i=1;i<=a;i++){
		for(j=1;j<=a;j++){
			printf("*");
		}
		printf("\n");
	}
}
void sppv2(int a){
	for(i=1;i<=a;i++){
		for(j=1;j<=a;j++){
			if(i==1||j==1||j==a||i==a)
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
	}
}
void sppv3(int a){
	for(i=1;i<=a;i++){
		for(j=1;j<=a;j++){
			if(i==1||j==1||j==a||i==a||j==i||j==a-i+1)
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
	}
}
void sppv4(int a){
	for(i=1;i<=a;i++){
		for(j=1;j<=2*a;j++){
			if(j>a-i&&j<=2*a-i+1)
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
	}
}
void sppv5(int a){
		for(i=1;i<=a;i++){
		for(j=1;j<=2*a;j++){
			if(j==a-i+1||j==2*a-i||((i==1||i==a)&&(j>=a-i+1&&j<=2*a-i)))
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
	}
}
void sppv6(int a){
		for(i=1;i<=a;i++){
		for(j=1;j<=2*a;j++){
			if(j>=i&&j<=a+i-1)
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
	}
	
}
void sppv7(int a){
	for(i=1;i<=a;i++){
		for(j=1;j<=2*a;j++){
			if(j==i||j==a+i-1||((i==1||i==a)&&(j>=i&&j<=a+i-1)))
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
	
	}
}
void sppv8(int a){
		for(i=1;i<=a;i++){
		for(j=1;j<=a;j++){
			if(j<=i)
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
	
	}
	
}
void sppv9(int a){
	for(i=1;i<=a;i++){
		for(j=1;j<=a;j++){
			if(j<=i&&(j==1||j==i||i==a))
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
	
	}
}
void sppv10(int a){
	for(i=1;i<=a;i++){
		for(j=1;j<=a;j++){
			if(j>a-i)
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
	
	}
}
void sppv11(int a){
	for(i=1;i<=a;i++){
		for(j=1;j<=a;j++){
			if(j==a-i+1||i==a||j==a)
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
	
	}
}
void sppv12(int a){
	for(i=1;i<=a;i++){
		for(j=1;j<=a;j++){
			if(j<=a-i+1)
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
	
	}
}
void sppv13(int a){
	for(i=1;i<=a;i++){
		for(j=1;j<=a;j++){
			if(j==a-i+1||j==1||i==1)
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
	}
}
void sppv14(int a){
	for(i=1;i<=a;i++){
		for(j=1;j<=a;j++){
			if(j>=i)
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
	}
}
void sppv15(int a){
	for(i=1;i<=a;i++){
		for(j=1;j<=a;j++){
			if(j==a||j==i||i==1)
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
	}
}
void sppv16(int a){
	for(i=1;i<=a;i++){
		for(j=1;j<=2*a-1;j++){
			if(j>=a-i+1&&j<=a+i-1)
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
	}
}
void sppv17(int a){
	for(i=1;i<=a;i++){
		for(j=1;j<=2*a-1;j++){
			if(j==a-i+1||j==a+i-1||i==a)
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
	}
}
void sppv18(int a){
	for(i=1;i<=a;i++){
		for(j=1;j<=2*a-1;j++){
			if(j>=i&&j<=2*a-i)
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
	}
}
void sppv19(int a){
	for(i=1;i<=a;i++){
		for(j=1;j<=2*a-1;j++){
			if(j==i||j==2*a-i||i==1)
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
	}
}
void sppv20(int a){
	for(i=1;i<=2*a-1;i++){
		for(j=1;j<=a;j++){
			if((j<=i&&i<=a)||(j<=2*a-i&&i>a))
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
	}
}
void sppv21(int a){
	for(i=1;i<=2*a-1;i++){
		for(j=1;j<=a;j++){
			if((j>=a-i+1&&i<=a)||(j>i-a&&i>a))
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
	}
}
void sppv22(int a){
	for(i=1;i<=2*a-1;i++){
		for(j=1;j<=2*a-1;j++){
			if((j>a-i&&i<=a&&j<a+i)||(j>i-a&&i>a&&j<3*a-i))
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
	}
}
void sppv23(int a){
	for(i=1;i<=2*a-1;i++){
		for(j=1;j<=2*a-1;j++){
			if(((j<=a-i||j>=a+i)&&i<=a)||((j<=i-a||j>=3*a-i)&&i>a))
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
	}
}
void sppv24(int a){
	for(i=1;i<=2*a-1;i++){
		for(j=1;j<=2*a-1;j++){
			if(((j>=2*i-1&&j<a+i)&&i<=a)||((j>=4*a-2*i-1&&j<3*a-i)&&i>a))
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
	}
	
}
void sppv25(int a){
		for(i=1;i<=2*a-1;i++){
		for(j=1;j<=2*a+1;j++){
			if(((j>a-i&&j<=2*a-2*i+1)&&i<=a)||((j>i-a&&j<=2*(i-a)+1)&&i>a))
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
	}
}
void sppv26(int a){
}
void sppv27(int a){
}
void sppv28(int a){
}
void sppv29(int a){
}
void sppv30(int a){
	int i,j,x=1,b;
	int n=a;

	
	for(i=1;i<=n/2;i++){
			
		for(b=n/2-i+1;b!=0;b--){
			printf(" ");
		}
		for(j=1;j<=2*i-1;j++){
			if(i==1){
			continue;
			}
			printf("*");
		}
		if(n%2==0){x=1;}
        else{x=-1;}
 
        while(x<=n/2-i){
			printf(" ");
        	 x++;
		}	
		for(b=n/2-i+1;b!=0;b--){
		printf(" ");
        }
	   	for(j=1;j<=2*i-1;j++){
			if(i==1){
			continue;
			}	
			printf("*");       
		}
		printf("\n");
	}
	
/*	for(i=1;i<=n/2;i++){
		for(j=1;j<=2*n+1;j++){
			if(j-i>4&&j-i<6){
				printf(" ");
				continue;
			}
			else{
				printf("*");
			}
		}
		printf("\n");
	
	}*/
	
	
	//printf("//////////////////");
	for(i=1;i<=n;i++){
			printf(" ");
		
		for(j=1;j<=2*n+1;j++){
			if(j<i||j>2*n-i){
				printf(" ");
				continue;
			}
			else
			printf("*");
		}
	
		printf("\n");
	}
}
void sppv65(int a){
	char ch=65;

	int num=a;
	for(i=1;i<=num;i++){
		ch=65;
		for(j=1;j<=num;j++){
			if(j<=num-i+1)
			printf("%c",ch++);
			else
			printf("_");
		}
		ch--;
		for(j=1;j<=num;j++){
			if(j<=i-1)
			printf("_");
			else
			printf("%c",ch--);
		}
		printf("\n");
	}
	
}
void sppv66(int a){
		int k;
	char ch=65;
	int num=a;
	for(i=1;i<=num;i++){
		for(j=1;j<=num;j++){
			if(j<=num-i+1){
				printf("%c",ch);
			}
			/*if(j>num+i){
				printf("%c",ch);
			}*/
			else{
				printf("_");
			}	
		}
		/*if(i==1)
		printf("%c",--ch);
		else
		printf("_");*/
		for(j=1;j<=num;j++){
			if(j>=i){
				printf("%c",ch);
			}
			/*if(j>num+i){
				printf("%c",ch);
			}*/
			else{
				printf("_");
			}	
		}
		
		printf("\n");
		ch++;
	}

}
void sppv67(int a){
	
	char ch=65;
	int num=a;
	for(i=1;i<=num;i++){
		for(j=1;j<=num+1;j++){
			if(j<=num-i+1)
			printf("%d",i);
			else if(j==num+1&&i==1)
			printf("%d",i);
			else if(j>num-i)
			printf("-");
			
		}
		for(j=1;j<=num+1;j++){
			if(j>i)
			printf("%d",i);
			else if(j<i)
			printf("-");
		}
		ch++;
		printf("\n");
	}
	
}
void sppv68(int a){
	
}

