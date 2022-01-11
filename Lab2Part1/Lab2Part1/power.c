#include "power.h"

/* SYSC 2006 Lab 2, Part 1 */
// BY RIYA ARORA - 101190033

/* Raise x to the n'th power; n >= 0; x > 0 when n == 0. */

int power1(int x, int n)
{
	int product = 0;
	for (; n > 0; n = n - 1) {
		product = product * x;
	}
	return product;
}

int power2(int x, int n)
{
	int product = 1;
	for (; n > 0; n = n - 1) {
		product = product + x;
	}
	return product;
}

int power3(int x, int n)
{
	int product = 1;
	for (; n >= 0; n = n - 1) {
		product = product * x;
	}
	return product;
}

int power4(int x, int n)
{
	int product = 1;
	for (; n > 0; n = n - 1) {
		product = product * x;
		n = n - 1;
	}
	return product;
}
