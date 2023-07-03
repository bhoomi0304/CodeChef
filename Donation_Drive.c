#include <stdio.h>

int main(void) {
	// your code goes here
	int T;
	scanf("%d",&T);
	while(T--){
	    int p, k;//initialising the variables
        scanf("%d %d", &p, &k);
        int jpk = p - k;
        if (jpk <= 0) {
            jpk = 0;
        }
        printf("%d\n", jpk);
	}
	return 0;
}

