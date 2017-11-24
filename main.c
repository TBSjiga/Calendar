#include <stdio.h>

int main()
{
	int q , m , k, h, a, b, c;
	printf ("Please, enter the date. (dd mm yyyy.) \n");
	scanf ("%d %d %d " , &q , &m , &k);
	if (m==1)
	{
		m=13;
		k--;
	}
	if (m==2)
	{
		m=14;
		k--;
	}
	a=(q+(13*(m+1))/5;
	b=(k%100);
	c=(k/100);
	h=(a+b+(b/4)+(c/4)-2*c)%7;
	if (h==0)
	{
		printf ("Saturday");
	}
	if (h==1)
	{
		printf ("Sunday");
	}
	if (h==2)
	{
		printf ("Monday");
	}
	if (h==3)
	{
		printf ("Tuesday");
	}
	if (h==4)
	{
		printf ("Wednesday");
	}
	if (h==5)
	{
		printf ("Thursday");
	}
	if (h==6)
	{
		printf ("Friday");
	}
	return 0;
}
