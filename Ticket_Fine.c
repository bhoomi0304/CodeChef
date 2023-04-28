#include <stdio.h>

int main(void) {
	// your code goes here
	int tc;
	scanf("%d",&tc);
	while(tc--){
	    int a,b,c;
	    scanf("%d%d%d",&a,&b,&c);
	    int d=b-c;
	    printf("%d\n",d*a);
	}
	return 0;
}

