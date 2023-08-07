#include <stdio.h>

int main(void) {
	// your code goes here
	int tc;
	scanf("%d",&tc);
	while(tc--){
	    int n,a,b,c;
	    scanf("%d %d %d %d", &n, &a, &b, &c);
	    int d=a+c;
	    if(n<=b && n<=d) 
	        printf("YES\n");
	    else 
	        printf("NO\n");
	}
	return 0;
}

