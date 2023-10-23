#include "main.h"

/**
 * print_chessboard - function that prints the chessboard.
 * @a: it is chessboard.
 */
void print_chessboard(char (*a)[8])
{
	int index_1, index_2;

	for (index_1 = 0; a[index_1][7]; index_1++)
	{
		for (index_2 = 0; index_2 < 8; index_2++)
			_putchar(a[index_1][index_2]);

		_putchar('\n');
	}
}
