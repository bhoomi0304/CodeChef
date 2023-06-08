#include <stdio.h>

int main(void) {
	// your code goes here
	int T;
	scanf("%d",&T);
	while(T--){
	    int n;
	    scanf("%d",&n);
	    char s[n],temp;;
	    scanf("%s",s);
	    for(int i=0;i<n-1;i=i+2){
	        temp=s[i];
	        s[i]=s[i+1];
	        s[i+1]=temp;
	    }
	    for(int i=0;i<n;i++){
	        printf("%c",122-(s[i]-97));
	    }
	    printf("\n");
	    
	}
	return 0;
}

