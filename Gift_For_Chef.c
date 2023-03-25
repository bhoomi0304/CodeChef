#include <stdio.h>

int main(void) {
// your code goes here
int T;
scanf("%d",&T);
while(T--){
  /*int n=6,a[n],flag=1;
  for(int i=0;i<6;i++){
      scanf("%d",&a[i]);
  }
  for(int i=0;i<6;i=i+2){
      if(a[i]<a[i+1]){
          flag=0;break;
      }
  }
  if(flag==1){
      printf("YES\n");
  }
  else{
      printf("no\n");
  }*/
  int x1,x2,y1,y2,z1,z2,flag=0;
  scanf("%d%d%d%d%d%d",&x1,&x2,&y1,&y2,&z1,&z2);
  if(x2>=x1 && y2>=y1 && z2<=z1 ){
      flag=1;
  }
  if(flag==1){
      printf("YES\n");
  }else{
      printf("NO\n");
  }
}
return 0;
}
