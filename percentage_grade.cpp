//this program is to calculate percentage and grade//
#include<stdio.h>
#include<math.h>
int main()
{
	int p, c, b, m, cs, f;
	printf("Enter grades for Physics, Chemistry, Biology, Mathematics and CS");
	scanf("%d %d %d %d %d", &p, &c, &b, &m, &cs);
	f = (p+c+b+m+cs)/5;
	printf("\n total percentage is %d", f);
	if (f>=90)
	printf("\n Grade A");
	else if(f<=89 && f>=80)
	printf("\n Grade B");
	else if(f<=79 && f>=70)
	printf("\n Grade C");	
	else if(f<=69 && f>=60)
	printf("\n Grade D");
	else if(f<=59 && f>=40)
	printf("\n Grade E");
	else
	printf("\n Grade F");
	return 0;
}
