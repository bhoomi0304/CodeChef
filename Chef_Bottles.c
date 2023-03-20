#include <stdio.h>

int main() {
    int T;
    scanf("%d",&T);
    while(T--){
        int n,c,t;
        scanf("%d %d %d",&n,&c,&t);
        if((t/c)==0){
           
            printf("0\n");
        }
        else {
            if(t/c>n){
            printf("%d\n",n);}
            else{
            printf("%d\n",t/c);
        }
        }
       
       
    }
   
    return 0;
}
