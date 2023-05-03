#include <stdio.h>

int main(void) {
	// your code goes here
	int T;
	scanf("%d",&T);
	while(T--){
	    int canlen,bite,count=0;
	    scanf("%d%d",&canlen,&bite);
	    if(canlen%bite==0)
	    {
	        printf("%d\n",canlen/bite);
	    }
	    else{
	        printf("-1\n");
	    }
	    
	}
	return 0;
}

