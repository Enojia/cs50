/*
 * =====================================================================================
 *
 *       Filename:  sum.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/25/16 07:28:56
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
	int userInput;
	int result;
	printf("type a sequence of integer\n");
	scanf("%i",&userInput);

	while(userInput > 0)
	{
		int temp = userInput % 10;
		result += temp;
		userInput /= 10;
	}

	printf("The result of the sum is %i.\n", result);
	return 0;
}
