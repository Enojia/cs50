/*
 * =====================================================================================
 *
 *       Filename:  copyFile.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/05/2016 14:23:55
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
#include <ctype.h>

int main(void)
{
		char inName[64], outName[64];
		FILE *in, *out;
		int c;

		printf("Enter the name of the file to be copied\n");
		scanf("%63s", inName);
		printf("Enter the name of the out file\n");
		scanf("%63s", outName);

		if((in = fopen(inName, "r")) == NULL)
		{
				printf("Can't open %s.", inName);
				return 1;
		}

		if((out = fopen(outName, "w")) == NULL)
		{
				printf("can't open %s for writing.", outName);
				return 2;
		}

		while((c = getc(in)) != EOF)
		{
				putc(toupper(c), out);
		}

		fclose(in);
		fclose(out);

		printf("copy successfull\n");

		return 0;
}
