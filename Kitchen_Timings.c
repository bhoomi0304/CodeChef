#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int start1,end1;
	    scanf("%d%d",&start1,&end1);
	    printf("%d\n",end1-start1);
	}
    
	return 0;
}

