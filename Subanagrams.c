#include <stdio.h>

int main(void)
{
// your code goes here
int count,coun=0;
char a[100000];
scanf("%d",&count);
static int ac[26],tc[26];
for (int i = 0; i < 26; i++)
    {
       ac[i]=10000;
    }
  for (int I = 0; I < count; I++)
  {
   scanf("%s",a);
   for (int J = 0; J < strlen(a); J++)
   {
    tc[a[J]-97]++;
   }

   
   for (int j = 0; j < 26; j++)
   {
    if(tc[j]<ac[j])
   ac[j]=tc[j];
   }
   for (int j = 0; j < 26; j++)
   {
      tc[j]=0;
   }
  }
  for (int i = 0; i < 26; i++)
  {
   for (int j = 0; j < ac[i]; j++)
   {
   printf("%c",i+97);
   coun++;
   }
   
  }
  if(coun==0)
  printf("no such string");
return 0;
}
