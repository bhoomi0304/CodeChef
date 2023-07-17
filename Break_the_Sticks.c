#include <stdio.h>

int main(void) {

	int tc;
	scanf("%d",&tc);
	while(tc--){
	    int a,b;
	    scanf("%ld %ld",&a,&b);
	    printf("%s\n",((b%2!=0)||(b%2==0&&((a-b)%2)==0))?"YES":"NO");
	}
	return 0;
}

