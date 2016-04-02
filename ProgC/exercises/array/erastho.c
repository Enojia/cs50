/*
 * =====================================================================================
 *
 *       Filename:  erastho.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/29/16 18:57:26
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
	int P[150];

	for(int i = 0; i < 150; i++)
	{
			P[i] = 0;
	}

	for(int i = 2; i < 150; i++)
	{
			if(P[i] == 0)
			{
					printf("%i is prime\n", i);
			}
			
			for(int j = 1; i*j < 150; j++)
			{
					P[i*j] = 1;
			}

	}

}
