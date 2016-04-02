/*
 * =====================================================================================
 *
 *       Filename:  lcm.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/02/16 09:33:31
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

int gcd(int u, int v);
int lcm(int u, int v);

int main(void)
{
		int u;
		int v;

		printf("Enter 2 numbers: ");
		scanf("%i %i", &u, &v);
		
		printf("The least common multiple of %i, %i is %i\n", u, v, lcm(u, v));

		return 0;
}

int gcd(int u, int v)
{
		int temp;

		while(v != 0)
		{
				temp  = u % v;
				u = v;
				v = temp;
		}

		return u;
}

int lcm(int u, int v)
{
		return (u * v) / gcd(u, v);
}
