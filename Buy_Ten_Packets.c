#include <stdio.h>

int main(void) {
	
	int tc;
	scanf("%d",&tc);
	while(tc--){
	    int two,four;
	    scanf("%d%d",&two,&four);
	    printf("%d\n",two+four+four);
	}
	return 0;
}
