//program to print day of the week from day number//
#include<stdio.h>
int main()
{
	int x;
	printf("Enter day number here \n");
	scanf("%d", &x);
	if (x==1)
	printf("Day is Monday");
	else if ( x==2)
	printf("Day is Tuesday");
	else if ( x==3)
	printf("Day is Wednesday");
	else if ( x==4)
	printf("Day is Thursday");
	else if ( x==5)
	printf("Day is Friday");
	else if ( x==6)
	printf("Day is Saturday");
	else if (x==7)
	printf("Day is Sunday");
	else
	printf("Incorrect number entered");
	return 0;
}
