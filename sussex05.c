#include <stdio.h>
	int main()
	{
 
	 int x,y,s,c;
	 y = 0;
	scanf("%d",&x);
	 while(y<x)
	 {
	 y++;
	s = y * y;
	c = y * y * y;
	printf("%d %d %d\n",y,s,c);
	 }
	 return 0;
	}