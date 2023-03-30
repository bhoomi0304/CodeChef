#include <stdio.h>

int main(void) {
// your code goes here
int T;
scanf("%d",&T);
while(T--){
   long int n;
   scanf("%ld",&n);
   printf("%ld\n",((3*n)+(n*n))/2);
}
return 0;
}

