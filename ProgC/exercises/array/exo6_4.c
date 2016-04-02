/*
 * =====================================================================================
 *
 *       Filename:  exo6_4.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/29/16 18:09:29
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
	int list[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int temp;

	for(int i = 0; i < 10; i++)
	{
		temp += list[i];
	}

	printf("%.2f\n", (float)temp/10);
}
