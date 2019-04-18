#include <stdio.h>

int main () {
	
	int a;
	long b;
	long long c;
	
	double e;
	long double f;
	
	printf("size of int: %ld bytes\n",sizeof(a));
	printf("size of long: %ld bytes\n",sizeof(b));
	printf("size of long long: %ld bytes\n",sizeof(c));
	printf("size of double: %ld bytes\n",sizeof(e));
	printf("size of long double: %ld bytes\n",sizeof(f));
	
	return 0;
	
	
}
