#include <stdio.h>

int main(void) {
	int T;
	scanf("%d",&T);
	while(T--){
	    int x;
	    scanf("%d",&x);
	    (x<=3)?printf("BRONZE\n"):(x>3 && x<=6)?printf("SILVER\n"):printf("GOLD\n");
	    
	}
	return 0;
}

