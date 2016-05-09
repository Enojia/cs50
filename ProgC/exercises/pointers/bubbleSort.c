/*
 * =====================================================================================
 *
 *       Filename:  bubbleSort.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  25/04/2016 14:37:18
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
#include <stdbool.h>

void sort3(int *it)
{
		int *start = it;
		int *end = it+3;
		bool swaped = true;
		
		while(swaped)
		{
			swaped = false;
			it = start;

			for(; it != end; it ++)
			{
				if(*it < *(it-1))
				{
						int temp = *it;
						*it = *(it-1);
						*(it-1) = temp;
						swaped = true;
				}
			}

		}
}

int main(void)
{
		int list[3] = {10, 4, 2};
		int *it = list;
		sort3(it);

		for(int i = 0; i<3; i++)
		{
				printf("%i\n", list[i]);
		}

		return 0;
}
