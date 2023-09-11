//this program is to check whether given triangle is equilateral, isosceles or scalene//
#include<stdio.h>
#include<math.h>
int main()
{
	int a, b, c;
	printf("Enter values for three sides \n");
	scanf("%d %d %d", &a, &b, &c);
	if (a==b && b==c)
	printf("\n Triangle is equilateral");
	else if (a==b || b==c || c==a)
	printf("\n Triangle is isosceles");
	else
	printf("\n Triangle is scalene");
	return 0;
}
