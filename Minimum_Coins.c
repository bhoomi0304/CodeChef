#include <stdio.h>

int main(void) {
	// your code goes here
	int x,t;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d",&x);
	    printf("%d\n",x%10);
	}
	return 0;
}
