#include <stdio.h>

int main(void) {
	// your code goes here
	int T;
	scanf("%d",&T);
	while(T--){
	    float n;
	    float x;
	    scanf("%f%f",&n,&x);
	    (x>=(n/2))? printf("YES\n"): printf("NO\n");
	}
	return 0;
}

