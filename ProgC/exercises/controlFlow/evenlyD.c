/*
 * =====================================================================================
 *
 *       Filename:  evenlyD.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/26/16 08:30:57
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
		int a;
		int b;
		printf("Enter 2 numbers:");

		scanf("%i %i", &a, &b);

		if (a%b == 0)
		{
				printf("%i is evenly divisible by %i", a,b);
		}

		else
		{
				printf("%i is not divisible by %i", a,b);
		}
}
