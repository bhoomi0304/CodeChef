#include <stdio.h>

int main(void) {
	// your code goes here
	int n, even=0,odd=0;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
	    scanf("%d",&a[i]);
	}

	for(int i=0;i<n;i++){
	   
	   if(a[i]%2==0){
	        even+=1;
	    }
	    else{
	        odd+=1;
	    }
	}
	if(even>odd){
	    printf("READY FOR BATTLE\n");
	}
	else{
	    printf("NOT READY\n");
	}
	return 0;
}

