#include <stdio.h>

int main(void) {
	// your code goes here
	int T;
	scanf("%d",&T);
	while(T--){
	    int x,y,z;
	    scanf("%d%d%d",&x,&y,&z);
        printf("%d\n",(x *4) + (y*2) + (z*0));
	}
	return 0;
}

