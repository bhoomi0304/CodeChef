#include <stdio.h>

int main(void) {
	// your code goes here
	int T;
	scanf("%d",&T);
	while(T--){
	    int x,y;
	    scanf("%d%d",&x,&y);
	    if(x>0 && y>0){
	        printf("Solution\n");
	    }else if(x==0){
	        printf("Liquid\n");
	    }
	    else{
	        printf("Solid\n");
	    }
	    
	}
	return 0;
}

