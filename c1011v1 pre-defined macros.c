#include <stdio.h>

void  main(){
	printf("\tprogram to check pre-defined macros.\n");
	printf("file name. %s\n",__FILE__);
	printf("time. %s\n",__TIME__);
	printf("date. %s\n",__DATE__);
	printf("line number. %d\n",__LINE__);
	printf("ansi. %d\n",__STDC__);
	

	getch();
	
	
}
