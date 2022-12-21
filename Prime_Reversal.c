
#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int xz;
	    scanf("%d",&xz);
	    char s[xz],s1[xz];
	    scanf("%s\n%s",s,s1);
	    int aa,bb;
	    aa=bb=0;
	    for(int i=0; i<xz; i++){
	        if(s[i]=='1') 
	            aa++;
	        if(s1[i]=='1') 
	            bb++;
	    }
	    if(aa==bb)
	        printf("YES\n");
	   else
	        printf("NO\n");
	}
    
	return 0;
}

