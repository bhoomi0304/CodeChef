#include <stdio.h>

int main(void) {
	// your code goes here
	int T;
	scanf("%d",&T);
	while(T--){
	    int n,k;
        scanf("%d %d", &n, &k);
        if(n>k)
            printf("No\n");
        else if(n==k)
            printf("No\n");
        else
            printf("Yes\n");

	}
	return 0;
}

