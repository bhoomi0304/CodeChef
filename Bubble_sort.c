#include <stdio.h>

int main(void) {
// your code goes here
int T;
scanf("%d",&T);
while(T--){
    int p,n,k,temp;
   scanf("%d",&n);
   int a[n];
   for(int i=1;i<=n;i++){
       scanf("%d",&a[i]);
   }
   scanf("%d",&k);
   temp=a[k];
   for(int i=1;i<=n-1;i++){
       for(int j=1+i;j<=n;j++)
       {
           if(a[i]>a[j]){
               p=a[i];
               a[i]=a[j];
               a[j]=p;
           }
       }
   }
   for(int i=1;i<=n;i++){
       if(temp==a[i]){
           printf("%d\n",i);
           break;
       }
   }
}
return 0;
}
