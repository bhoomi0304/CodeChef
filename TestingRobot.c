#include <stdio.h>

int main(void) {
	// your code goes here
	int T;
	scanf("%d",&T);
	while(T--){
	    int n,x,max;
	    char s[10000];
	    int min,count=1;
	    
	    scanf("%d%d%s",&n,&x,s);
	    min=x;
	    max=x;
	    for(int i=0;s[i];i++){
	        if(s[i]=='R')
	            x++;
	        else
	            x--;
	        if(min>x){
	            count++;
	            min=x;
	        }
	        if(max<x){
	            count++;
	            max=x;
	        }
	    }
	    printf("%d\n",count);
	}
	return 0;
}

