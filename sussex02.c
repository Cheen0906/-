#include <stdio.h>  
  
int main()
{
	int a,b,c,d,sum,product;
	scanf("%d\n%d\n%d\n%d",&a,&b,&c,&d);
	sum = a+b+c+d;
	product = a*b*c*d;
	printf("sum is %d\n",sum);
	printf("product is %d\n",product);
	return 0;
}