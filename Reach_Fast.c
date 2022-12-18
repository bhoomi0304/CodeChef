#include <stdio.h>

int main(void) {
	// your code goes here
	int tc;
	scanf("%d",&tc);
	while(tc--){
	    int chef,chefina,steps;
	    scanf("%d%d%d",&chef,&chefina,&steps);
	    int count=0;
	        if(chef>=chefina){
	            while(chef>chefina){
	                chef=chef-steps;
	                count++;
	            }
	        }
	        else{
	            while(chef<chefina){
	                chef=chef+steps;
	                count++;
	            }
	        }
	    printf("%d\n",count);
	}
    
	return 0;
}
