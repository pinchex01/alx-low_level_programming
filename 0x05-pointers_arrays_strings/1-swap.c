#include "main.h"

/**
  * swap_int swaps the values of two integers
  *
  * @a: an integer to swap
  * @b: other integer
  *
  * Return: void
  */
void swap_int(int *a, int *b)
{
	int swp;

	swp = *a;
	*a = *b;
	*b = swp;
}
