#include <stdio.h>

int main(void) {
	// your code goes here
	int T;
	scanf("%d",&T);
	while(T--){
	     int xx,yy;
       scanf("%d",&xx);
     if((xx==100)||(xx<100))
     printf("%d\n",xx);
     else
     printf("%d\n",(xx-10));
	}
	return 0;
}

