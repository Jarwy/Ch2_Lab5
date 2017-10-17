#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int main(void)
{
	float population = 6763;
	float rate = 0.0118;
	float newPop = population;
	float newPop2 = population;
	int i;
	int year;
	float n ;

	printf("%15s%30s%25s\n", "Years from now", "Populations(In millions)", "Increasing(In millions)");

	for (year = 1; year <= 75; year++)
	{

		for (i = 1; i <= year; i++)
		{
			n = 1;
			n = n*(1 + rate);
		}
		newPop2 = newPop;
		newPop = n*newPop2;

		printf("%15d%30.2f%25.2f\n", year, newPop, newPop - newPop2);
	}

	system("pause");
	return 0;
}