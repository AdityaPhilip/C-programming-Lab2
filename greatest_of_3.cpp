//this program is to print greatest of three numbers//
#include <stdio.h>
#include <math.h>
int main ()
{
	int a, b, c;
	printf("Enter three numbers");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	if (a>b && a>c)
	printf("%d is greatest", a);
	else if (b>c)
	printf("%d is greatest", b);
	else
	printf("%d is greatest", c);
}
