#include <stdlib.h>
#include <stdio.h>

#include <string.h>

int main()
{
    int num,i; // the number of temperatures to analyse
    scanf("%d", &num);
    if(num<0){
    	num*=-1;
	}
    if(num!=0){
    	
    int *temp = (int*)malloc(sizeof(int)*num);
    for (i = 0; i < num; i++) {
         // a temperature expressed as an integer ranging from -273 to 5526
        scanf("%d", &temp[i]);
         if(temp[i]==0){
            	temp[i] = INT_MAX;
			}
    }
    int j,m;
    int *neg,n=0,*pos,p=0,k=0;
	neg = (int*)calloc(1,sizeof(int));
	pos =  (int*)calloc(1,sizeof(int));
    for(i=0;i<num;i++){
        for(j=0;j<num-i-1;j++){
            if(temp[j]>temp[j+1]){
            m = temp[j];   
            temp[j] = temp[j+1];
            temp[j+1] = m;
            }
        }
    }
    for(i=0;i<num;i++){
    		if(temp[i]>0){
    			pos[p++] = temp[i];
    			pos = (int*)realloc(pos,(p+1)*sizeof(int));

			}
			else{
				neg[n++] = temp[i];
				neg = (int*)realloc(neg,(n+1)*sizeof(int));
			}
	}

	if(p==0){
		printf("%d\n",neg[n-1]);
	}
	else if(n==0){
		printf("%d\n",pos[0]);
	}
	else if((-1*neg[n-1])>pos[0]){
		printf("%d\n",pos[0]);
	}
	else if((-1*neg[n-1])<pos[0]){
		printf("%d\n",neg[n-1]);
	}
	else if((-1*neg[n-1])==pos[0]){
		printf("%d\n",pos[0]);
	}

}
 else{
 	printf("%d",0);
 }   

    return 0;
}
