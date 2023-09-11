//this program is to see if three numbers are equal//
#include<stdio.h>
#include<math.h>
int main()
{
	int a, b, c;
	printf("enter three numbers here");
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	if (a==b && b==c )
	printf("the given numbers are equal");
	else 
	printf("the given numbers are not equal");
	return 0;
}
