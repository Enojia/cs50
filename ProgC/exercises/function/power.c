/*
 * =====================================================================================
 *
 *       Filename:  power.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/01/16 18:56:50
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <stdio.h>

int to_the_n(int x, int n);

int main(void)
{
	int x;
	int n;

	printf("Enter the number x : ");
	scanf("%i", &x);
	printf("Enter the exponent n: ");
	scanf("%i", &n);

	printf("x to the n = %i \n", to_the_n(x, n));
}

int to_the_n(int x, int n)
{
		int result = 1;

		for(int i = 0; i < n; i++)
		{
				result *= x;
		}

		return result;
}
