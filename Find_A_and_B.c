#include <stdio.h>

int main(void) {
	// your code goes here
	int T;
	scanf("%d",&T);
	while(T--){
	    int x,y,z;
	    scanf("%d%d%d",&x,&y,&z);
	    int a=x*y;
	    int b=y*z;
	    int c=z*x;
	    (a%z==0)?printf("%d %d\n",a,z):(b%x==0)?printf("%d %d\n",b,x):(c%y==0)?printf("%d %d\n",c,y):printf("-1\n");
	    
	}
	return 0;
}

