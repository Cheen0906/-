#include <stdio.h>
#include <math.h>
int main()
{
	int x,y;
	float z;
	scanf("%d\n%d",&x,&y);
	if(x>y&&y>0)
	{
		z ==log(x) + log10(y);
		printf("z=log(%d)+log10(%d)=%.5f",x,y,z);
	}
	else if(x<=y)
	{
		z=sin(x)+cos(y);
		printf("z=sin(%d)+cos(%d)=%.5f",x,y,z);
	}
	else
	{
		printf("x is greater than y, but at least one of values <=0");
	}
	return 0;
}
