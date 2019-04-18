#include <stdio.h>
#include "cs50.c"
int frequency(string);
int main(void){
	string s = get_string(NULL,"Enter String :");
	int f = frequency(s);
	printf("\nfrequency : %d",f); 
}

int frequency(string note)
{
    const string NOTES[] = {"C", "C#", "D", "D#", "E", "F",
                            "F#", "G", "G#", "A", "A#", "B"
                             };
    char ext =0 ;
    int oct ;
    char ***keys = (char***)calloc(9,sizeof(char**));
    for (int j = 0; j < 9; j++)
    {	
    	keys[j] = (char**)calloc(12,sizeof(char*));
    	for(int m = 0; m < 12;m++)
		{
			if(j==0 && m >=3)
			{	
				ext = 9;	
				break;
			}
			if(j ==8 && m>=1)
				break;
			keys[j][m] = (char*)calloc(2,sizeof(char));
			keys[j][m] = NOTES[(9+m-ext)%12];
			//printf("\n%d %d = %s\n",j,m,keys[j][m]);
		} 
    }
    
    char *check = (char*)calloc(2,sizeof(char));
    check[0]= note[0];
    if (isdigit(note[1]))
    {
        oct = (int)(note[1]) - 48 ;
    }
    else 
    {	
    	if (note[1] == '#'){
    		check[1] = note[1];
		}
		else
		{
			check[0]= check[0] - (check[0]=='A' ? -6 : 1);
			check[1] = '#';
		}
		oct = (int)(note[2]) - 48;
    }
    
    int a = 18;
    for (int i = 0 ;i < 12 ; i++)
    {
        if(!(strcmp(check,keys[oct][i])))
		{
			a =  (oct*12) + i - (oct > 0 ? 9 : 0);
			break;
        }
    }
    
    
    /*
    // To print keys in respective octaves
    ext =0;
	for(int i = 0;i< 9; i++)
	{	
		printf("\n OCATVE %d",i);
		for(int j = 0; j < 12; j++)
		{
			if(i==0 && j >=3)
			{	
				ext = 9;	
				break;
			}
			if(i==8 && j>=1)
				break;
			printf("\n**%d**",(i*12)-ext+j );
		}
	}
	*/
    int n = a - 48;
    int f = (int)(round( (pow(2,(double)n/12)) * (double)(440)));
    return f;
}
