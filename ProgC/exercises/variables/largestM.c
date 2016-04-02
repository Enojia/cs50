/*
 * =====================================================================================
 *
 *       Filename:  largestM.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/24/16 14:20:27
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
		int i = 365;
		int j = 7;
		int nextMultiple = i + j - i % j;
		printf("The nextMultiple of %i is %i", i, nextMultiple);
}
