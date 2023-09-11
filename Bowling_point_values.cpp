//program to find maximum point value for different bowling techniques//
#include<stdio.h>
int main()
{
	int a, b, c;
	printf("enter points for bowling techniques");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	if (a>b && a>c)
	printf("%d is Maximum point value", a);
	else if (b>c)
	printf("%d is Maximum point value", b);
	else
	printf("%d is Maximum point value", c);
	return 0;
}
