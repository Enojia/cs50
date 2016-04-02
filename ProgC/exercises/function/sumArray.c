/*
 * =====================================================================================
 *
 *       Filename:  sumArray.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/02/16 09:52:12
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

int sumArray(int array[], int arrayLength);

int main(void)
{
		int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

		printf("The result is %i\n", sumArray(array, 10));

		return 0;
}

int sumArray(int array[], int arrayLength)
{
		int result = 0;

		for(int i = 0; i < arrayLength; i++)
		{
			result += array[i];
			printf("%i\n", result);
		}

		return result;
}
