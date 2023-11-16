#include <stdio.h>
int  main()
{
	int m;
	scanf("%d",&m);
	if(m >= 70&&m <= 100)
	{
	printf("The mark is %d, it is 1st class\n",m);
	}
	else if(m >= 60 && m < 70)
	{
		printf("The mark is %d, it is 2:1 class\n",m);
	}
	else if(m >=50 && m < 60)
	{
		printf("The mark is %d, it is 2:2 class\n",m);
	}
	else if(m >= 40 && m < 50)
	{
		printf("The mark is %d, it is 3rd class\n",m);
	}
	else if(m > 100||m < 0)
	{
		printf("It is a wrong mark");
	}
	else
	{
		printf("fail");
	}
	
	return 0;
}
