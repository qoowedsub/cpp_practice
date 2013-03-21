#include "stdio.h"
#include "string.h"

int strrindex(char s[] ,char t[])
{
	int i=0;
	int b=-1;
	for(;s[i]!='\0';i++)
	{
		int a=-1;
		if(s[i]==t[0])
		{
			int a=i;
			int j=1;
			for(;s[i+j]==t[j] && t[j]!='\0';j++)
			{
				;
			}
			if(j==strlen(t))
				b=a;
		}
	}
	return b;
	
	
	
}

int main()
{
	char s1[] = "aaaaadsjofnjsnfdndo ifjdsjfdso fsdjfsdofjsnfw\n"; //
	char s2[] = "jsn";
	
	int a=strrindex(s1,s2);
	printf("%d\n",a);
	return 0;
}