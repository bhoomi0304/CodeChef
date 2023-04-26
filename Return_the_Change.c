#include <stdio.h>

int main(void) {
	// your code goes here
	int tc;
	scanf("%d",&tc);
	while(tc--){
	    int buy,sum=0;
	    scanf("%d",&buy);
	    if(buy%10==0){
	        sum=100-buy;
	    }
	    else if(buy%10<5){
	        sum=100-((buy/10)*10);
	    }
	    else{
	        sum=100-(((buy/10)*10)+10);
	    }
	    printf("%d\n",sum);
	}
	return 0;
}
