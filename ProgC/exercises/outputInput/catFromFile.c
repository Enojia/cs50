/*
 * =====================================================================================
 *
 *       Filename:  catFromFile.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/05/2016 09:03:40
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
		int c;

		while((c = getchar()) != EOF)
		{
				putchar(c);
		}

		return 0;
}
