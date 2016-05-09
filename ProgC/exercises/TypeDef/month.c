/*
 * =====================================================================================
 *
 *       Filename:  month.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  28/04/2016 09:53:51
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
		enum month{January, February, March, April, May, June, July, August, September,
		October, November, December};

		char *monthName(enum month aMonth)
		{
				char *result;
				switch(aMonth){
						case January:
								result = "January";
								return result;
								break;
						case February:
								result = "February";
								return result;
								break;
				}
		}

		enum month aMonth = February;

		printf("%s\n", monthName(aMonth));
}
