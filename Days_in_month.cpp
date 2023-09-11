//this program is to calculate the number of days in the given month//
#include<stdio.h>
#include<math.h>
int main()
{
	int y, m;
	printf("Enter year and month \n");
	scanf("%d %d", &y, &m);
	if (m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12)
	printf("Month has 31 days");
	else if (m==2)
	{
	if (y%4==0 && (y%100!=0 || y%400==0))
	printf("Month has 29 days");
	else
	printf("Month has 28 days");
	}
	else
	printf("Month has 30 days");
	return 0;
}
