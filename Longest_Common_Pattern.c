#include <stdio.h>
#include <string.h>
int main(void) {
	// your code goes here
   	char str1[100000],str2[100000];
	int count,i,j,T,a,b;
	scanf("%d",&T);
	while(T--)
	{
		count=0;
		scanf("%s%s",str1,str2);
		for(i=0;i<=127;i++)
		{
			a=0,b=0;
			for(j=0;j<strlen(str1);j++)
			if(str1[j]==i)
			a++;
			for(j=0;j<strlen(str2);j++)
			if(str2[j]==i)
			b++;
			if(a>=b)
			count+=b;
			else
			count+=a;
			}
		printf("%d\n",count);
	}
	return 0;
    
}

