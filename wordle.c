#include <stdio.h>

int main(void) {
	// your code goes here
	int T;
	scanf("%d",&T);
	while(T--){
	    char a[5] ,b[5],c[5];
	    scanf("%s",&a);
	    scanf("%s",&b);
	    for(int i=0;i<5;i++){
	        if(a[i]==b[i]){
	            c[i]='G';
	        }
	        else{
	            c[i]='B';
	        }
	    }
	    
	   printf("%s\n",c);
	}
	return 0;
}
