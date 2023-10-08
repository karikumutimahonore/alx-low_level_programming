#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program generates a random number,
 * determines if it's positive, negative, or zero, and prints the result.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
    int n;

    /* Seed the random number generator with the current time */
    srand(time(0));

    /* Generate a random number and assign it to n */
    n = rand() - RAND_MAX / 2;

    /* Check if n is positive */
    if (n > 0)
        printf("%d is positive\n", n);
    /* Check if n is zero */
    else if (n == 0)
        printf("%d is zero\n", n);
    /* If n is neither positive nor zero, it's negative */
    else
        printf("%d is negative\n", n);

    return (0);
}

