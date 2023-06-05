#include <stdio.h>
int gcd(int a,int b){
    if(a%b==0)
        return b;
    else
        gcd(b,a%b);
}
int main(void) {
	// your code goes here
	int tc;
	scanf("%d",&tc);
	while(tc--){
	    int a,b;
	    scanf("%d%d",&a,&b);
	    printf("%d\n",gcd(a,b));
	    
	}
	return 0;
}

