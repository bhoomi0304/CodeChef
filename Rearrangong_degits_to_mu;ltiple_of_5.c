#include <stdio.h>

int main(void) {
int T;
scanf("%d",&T);
while(T--)
    { 
        long long int x,f=0;;
        scanf("%lld",&x);
        char s[x];
        scanf("%s",&s);
        for(int a=0;a<x;a++)
    {
        if(s[a]=='0'|| s[a]=='5')
        {
            f=1;
             break; 
    
        }
    }
    if (f==1)
        printf("Yes\n");
    else
        printf("No\n"); 
    } 
	return 0;
}
