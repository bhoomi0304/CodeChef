#include <stdio.h>

int main(void) {
int n;
scanf("%d",&n);
int T[n][n];
for(int i=0;i<n;i++)
{
   for(int j=0;j<n;j++){
     
           scanf("%d",&T[i][j]);
       
   }
}for(int x=0;x<n;x++)
{
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<n;j++)
      {
          if (T[i][x] + T[x][j] < T[i][j]) {
               T[i][j] = T[i][x] + T[x][j];
           }
      }
     
       
   }
}
int M;
scanf("%d", &M);
for (int i = 0; i < M; i++)
{
   int S, G, D;
   scanf("%d %d %d", &S, &G, &D);
   printf("%d %d\n", T[S][G] + T[G][D], T[S][G] + T[G][D] - T[S][D]);
}

return 0;
}
