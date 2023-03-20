#include <stdio.h>

int main(void) {
int t;
scanf("%d",&t);
while(t--){
    int x,y;
    scanf("%d%d",&x,&y);
    if(x%y==0){
        printf("%d\n",x/y);
    }
    else{
        int total=(x/y)+(x%y);
        printf("%d\n",total);
    }
}
return 0;
}
