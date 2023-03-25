#include <stdio.h>

int main(void) {
// your code goes here
int T;
scanf("%d",&T);
while(T--){
   int x;
   scanf("%d",&x);
   (x<1600)?printf("3\n"):(x>=2000)?printf("1\n"):printf("2\n");
   
}
return 0;
}

