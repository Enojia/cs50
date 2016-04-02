/*
 * =====================================================================================
 *
 *       Filename:  transpose.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/02/16 10:09:41
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

void transpose(int arr1[5][4], int arr2[4][5]);
void displayMatrix(int arr[4][5]);

int main(void)
{
		int arr1[5][4] = {
				{0, 1, 2, 3},
				{4, 5, 6, 7},
				{8, 9, 10, 11},
				{12, 13, 14, 15},
				{16, 17, 18, 19}
		};

		int arr2[4][5] = {
				{0, 0, 0, 0, 0},
				{0, 0, 0, 0, 0},
				{0, 0, 0, 0, 0},
				{0, 0, 0, 0, 0}

		};

		transpose(arr1, arr2);

		displayMatrix(arr2);

		printf("------------\n");

		return 0;
}

void transpose(int arr1[5][4], int arr2[4][5])
{
		for(int i = 0; i < 5; i ++)
		{
				for(int j = 0; j < 4; j++)
				{
						arr2[j][i] = arr1[i][j];
				}
		}
}

void displayMatrix(int arr[4][5])
{
		for(int i = 0; i < 4; i ++)
		{
				for(int j = 0; j < 5; j++)
				{
						printf("%i    ", arr[i][j]);
				}
				printf("\n");
		}
}
