#include <stdio.h>
int main()
{
	int s;
	float p;
	scanf("%d",&s);
	if (0<s&&s<30000)
	{
		printf("Low\n");
		printf("Progressive Tax Rate is 0\n");
	}
else	if (30001<s&&s<120000)
	{
		printf("Lower-middle\n");
		p = (s - 30000) * 0.1;
		printf("Progressive Tax Rate is %f\n",p);
	}
else	if (120001<s&&s<220000)
	{
		printf("Upper-middle\n");
		p = (s - 120000) * 0.2 + (120000 - 30000) * 0.1;
		printf("Progressive Tax Rate is %f\n",p);
}
else if (s>220001)
{
	printf("High\n");
	p = (s - 220000) * 0.3 + (120000 - 30000) * 0.1 + (220000 - 120000) * 0.2;
	printf("Progressive Tax Rate is %f\n",p);

}
else
{
	printf("Error\n");
}
return 0;
}
