#include <stdio.h>

int main(void) {
	// your code goes here
	int T;
	scanf("%d",&T);
	while(T--){
	   int p,b;
	   scanf("%d%d",&p,&b);
	   (p>=b)?printf("%d\n",b):printf("%d\n",p);
	}
	return 0;
}

