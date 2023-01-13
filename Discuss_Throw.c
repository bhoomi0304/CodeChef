#include <stdio.h>

int main(void) {
	// your code goes here
	int T,x,y,z;
	scanf("%d",&T);
	while(T--){
	    scanf("%d%d%d",&x,&y,&z);
        if(x>=y && x>=z)
        printf("%d\n",x);
        else if(y>=x && y>=z)
        printf("%d\n",y);
        else if(z>=x && z>=y)
        printf("%d\n",z);
	}
	return 0;
}

