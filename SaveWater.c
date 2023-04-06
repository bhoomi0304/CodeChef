#include <stdio.h>

int main(void) {
	// your code goes here
	int T;
	scanf("%d",&T);
	while(T--){int h,x,y,c;
	    scanf("%d %d %d %d\n",&h,&x,&y,&c);
	    if(h*(x+y/2)<=c)
	    printf("Yes\n");
	    else printf("No\n");
	    
	}
	return 0;
}

