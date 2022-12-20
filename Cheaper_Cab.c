#include <stdio.h>

int main(void) {
	int t,x,y;
	scanf("%d",&t);
	while(t--){
	    scanf("%d%d",&x,&y);
    	if(x==y)
	        printf("ANY\n");
    	else if(x<y)
	     printf("FIRST\n");
    	else
	      printf("SECOND\n");
	}
	return 0;
}

