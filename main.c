#include <stdio.h>
#include <math.h>

int main(void)
{
	int i = 0;
	int num = 100;
	int max = 0;

	printf("max prime from 1 to 100\n");

	for (num = 1; num <= 100000; num += 2)
	{
		int tmp = sqrt(num);

		for (i = 2; i <= tmp; i++)
		{
			if (num % i == 0)
			{
				break;
			}
		}

		if (i == tmp + 1)
		{
			max = num;
		}
	}

	printf("max prime is %d\n", max);

	return 0;
}
