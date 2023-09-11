//this program is to calculate electricity bill of a household//
#include<stdio.h>
int main()
{
	int u;
	printf("enter units of power consumed");
	scanf("%d", &u);
	if (u<=100)
	printf("%d Rs",u*100);
	else if (u>100 && u<=250)
	printf("%d Rs" ,u*200);
	else 
	printf("%d Rs" ,u*300);
	return 0;
}
