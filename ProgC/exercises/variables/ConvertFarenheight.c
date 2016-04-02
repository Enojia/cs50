/*
 * =====================================================================================
 *
 *       Filename:  ConvertFarenheight.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/24/16 10:49:36
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

int main()
{
	float c;
	float f = 100.0;
	c = (f - 32)/1.8;;
	printf("%f fareneiht equal %f degree celcius", f,c);
	return 0;
}
