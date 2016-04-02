/*
 * =====================================================================================
 *
 *       Filename:  prime.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/25/16 09:55:35
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

int main(void)
{
		int p,d,max;
		_Bool isPrime;

		scanf("%i", &max);
		printf("\n");

		for (p = 2; p < max; p++)   //iterate through the number to test
		{
				isPrime = 1;
				for (d = 2; d < p; d++)  //iterate through 2 up to but not including the number to test
				{
						if (p%d == 0)     //if the tested number is divisibe by a previous one (xcluded 1) 
								isPrime = 0; //it s not a prime number
				}
				if (isPrime == 1)
						printf(" %i ", p);

		}
}
