#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>
#include<string.h>

void main(){
	long int i=0,j,num_names;
	int random;
	char *tmp;
	char **s = (char**)malloc(102400 * sizeof(char*) * 751);
	FILE *fp;
	
	fp = fopen("firstnames.txt","r");

	for(i=0;;i++){
		s[i] = (char*)malloc(102400 * sizeof(char));
		//fgets(s[i],102400,(FILE*)fp);
		fflush(stdin);
		fscanf(fp,"%s",s[i]);
		fflush(stdin);
		if(feof(fp)){
			num_names=i;
			break;
		}
		//printf("\n%ld)%s",i+1,s[i]); //prints all names on screen
	}

	/*
	for(i=0;i<736;i++){ //prints all names
	
		s[i] = s[random];
	}
	*/
	
	
	//fclose(fp);										
	
	FILE *fp2= fopen("printnames.txt","w");						//for output in different file
	for(i=0;i<num_names;i++){
		//srand (time(0));
		random = (rand() % (num_names) + 0);
		fprintf(fp2,"\n%ld)%s",i+1,s[random]);						//prints name on file
	}
	
	FILE *fp3 = fopen("sortedname.txt","w");
	
	printf("\nSorted names :\n");
	for(i=0;i<num_names;i++){
		for(j=0;j<num_names-1;j++){
			if(strcmp(s[j],s[j+1])>0){
				tmp=(char*)s[j];
				s[j]=s[j+1];
				s[j+1]=tmp;
			}
		}
	}
		//system("mode con: cols=100 lines=741");
		
		// using windows.h library
		
	SMALL_RECT rect; // safer method than using system call
    COORD coord;
    coord.X = 150; // Defining our X and
    coord.Y = num_names+10;  // Y size for buffer.

    rect.Top = 0;
    rect.Left = 0;
    rect.Bottom = coord.Y-1; // height for window
    rect.Right = coord.X-1;  // width for window

    HANDLE hwnd = GetStdHandle(STD_OUTPUT_HANDLE); // get handle
    SetConsoleScreenBufferSize(hwnd, coord);       // set buffer size
    SetConsoleWindowInfo(hwnd, TRUE, &rect);       // set window size

    //printf("Resize window");
	
	for(i=0;i<num_names;i++){
		fprintf(fp3,"\n%ld)%s",i+1,s[i]);
		printf("%d)",i+1);
		puts(*(s + i));
	}
	
	fclose(fp);
	fclose(fp2);
	fclose(fp3);
}
