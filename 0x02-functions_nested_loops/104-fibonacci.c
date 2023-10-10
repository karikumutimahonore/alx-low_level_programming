#include <stdio.h>

/**
 * numLength - prints the first 98 Fibonacci numbers
 * @num : operand number
 * Return: No. of digits
 */

int numLength(int num)
{
	int l = 0;

	if (!num)
	{
		return (1);
	}

	while (num)
	{
		num = num / 10;
		l += 1;
	}

	return (l);
}
/**
 *  *main - prints the first 98 fibonaci sequences
 *  Return: 0
 */

int main(void)
{
	unsigned long f1 = 1, f2 = 2, tmp, mx = 100000000, f10 = 0, f2o = 0, tmpo = 0;
	short int i = 1, initial;

	while (i <= 98)
	{
		if (f10 > 0)
			printf("%lu", f10);
		initial = numLength(mx) - 1 - numLength(f1);
		while (f10 > 0 && initial > 0)
		{
			printf("%i", 0);
			initial--;
		}
		printf("%lu", f1);

		tmp = (f1 + f2) % mx;
		tmpo = f10 + f2o + (f1 + f2) / mx;
		f1 = f2;
		f10 = f2o;
		f2 = tmp;
		f2o = tmpo;

		if (i != 98)
			printf(", ");
		else
			printf("\n");
		i++;
	}
	return (0);
}
