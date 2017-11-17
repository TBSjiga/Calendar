#include <stdio.h>

int main()
{
	int q , m , k, h;
	printf ("Please, enter the date. (dd mm yyyy.) \n");
	scanf ("%d %d %d " , &q , &m , &k);
	h=((q+(13*(m+1))/5)+(k%100)+((k%100)/4)+(k/400)-2*(k/100))%7;
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
