/*
 * =====================================================================================
 *
 *       Filename:  poly.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/24/16 11:09:35
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
#include <math.h>

int main(void)
{
		float x = 2.55;
		float result;
		result = 3 * (x*x*x) - 3 * (x*x) + 6;
		printf("The result of the operation is %f", result);
}
