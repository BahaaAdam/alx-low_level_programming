#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - returns the sum of two numbers
 * @a: the first number
 * @b: the second number
 * Return: the sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the subtraction of two numbers
 * @a: the first number
 * @b: the second number
 * Return: the subtraction of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the multplication of two numbers
 * @a: the first number
 * @b: the second number
 * Return: the multplication of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns the division of two numbers
 * @a: the first number
 * @b: the second number
 * Return: the division of a and b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns the modules of two numbers
 * @a: the first number
 * @b: the second number
 * Return: the modules of a and b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
