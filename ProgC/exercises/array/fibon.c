/*
 * =====================================================================================
 *
 *       Filename:  fibon.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/29/16 18:24:02
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
	int fibA = 0;
	int fibB = 1;
	int userNum;
	int result = 0;

	printf("Enter the number of fibonacci u want: ");
	scanf("%i", &userNum);

	printf("%i\n", fibA);
	printf("%i\n", fibB);

	for(int i = 2; i <= userNum; ++i)
	{
		result = (fibA + fibB);
		fibA = fibB;
		fibB = result;
		printf("%i\n", result);
	}
}
