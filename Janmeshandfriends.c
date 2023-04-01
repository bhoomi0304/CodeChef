#include <stdio.h>

int main(void) {
	// your code goes here
	int T;
	scanf("%d",&T);
	while(T--){
	    int x,y;
	    scanf("%d%d",&x,&y);
	    if((x+y)%2==0){
	        printf("Janmansh\n");
	    }else{
	        printf("Jay\n");
	    }
	    
	}
	return 0;
}

