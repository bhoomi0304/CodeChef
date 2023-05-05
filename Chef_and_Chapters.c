#include <stdio.h>

int main(void) {
	// your code goes here
	int tc;
	scanf("%d",&tc);
	while(tc--){
	    int x,y,z,total;
	    scanf("%d%d%d",&x,&y,&z);
	    total=x*y*z;
	    printf("%d\n",total);
	}
	return 0;
}

