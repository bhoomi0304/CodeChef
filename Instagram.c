#include <stdio.h>

int main(void) {
	// your code goes here
	int T;
	scanf("%d",&T);
	while(T--){  
	    int x,y;
	    scanf("%d%d",&x,&y);
	    if(x>10*y){
	        printf("YES\n");
	    }
	    else{
	        printf("No\n");
	    }
	}
	return 0;
}

