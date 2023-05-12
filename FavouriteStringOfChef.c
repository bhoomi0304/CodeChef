#include <stdio.h>
#include<string.h>
int main(void) {
	// your code goes here
  int t;
  scanf("%d",&t);
  while(t--){
      int n;
      scanf("%d",&n);
      char str[n];
      int x,y;
      scanf("%s",str);
      for(int i=0;i<n-3;i++){
          if(str[i]=='c'&&str[i+1]=='o'&&str[i+2]=='d'&&str[i+3]=='e')
          {
              x=i;
              break;
          }
      }
     for(int i=0;i<n-3;i++){
          if(str[i]=='c'&&str[i+1]=='h'&&str[i+2]=='e'&&str[i+3]=='f')
          {
              y=i;
              break;
          }
      }
      if(x<y)
      printf("AC\n");
      else
      printf("WA\n");
  }
	return 0;
	
}

