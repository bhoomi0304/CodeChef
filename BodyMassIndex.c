#include <stdio.h>

int main(void) {
	// your code goes here
	int T;
	scanf("%d",&T);
	while(T--){
	    int h,m;
	    scanf("%d%d",&m,&h);
	    ((m/(h*h))<=18)?printf("1\n"): ((m/(h*h))>18 && (m/(h*h))<=24)?printf("2\n"): ((m/(h*h))>24 && (m/(h*h))<=29)?printf("3\n"): printf("4\n");
	    
	}
	return 0;
}

