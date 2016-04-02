/*
 * =====================================================================================
 *
 *       Filename:  divisionTest.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/26/16 08:51:56
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
		float c;

		printf("Enter 2 numbers: \n");
		scanf("%i %i", &a, &b);

		c = (float)a/b;
		printf("The result is %.2f", c);
		
		return 0;

}
