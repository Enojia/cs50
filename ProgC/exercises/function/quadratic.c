/*
 * =====================================================================================
 *
 *       Filename:  quadratic.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/01/16 19:19:35
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

float squareRoot(float num);
float absoluteValue(float num);

int main(void)
{
	float discriminant;
	int a;
	int b;
	int c;
	float result1;
	float result2;

	printf("ax**2 + bx + c\n");
	printf("Enter a b and c in this order: ");
	
	scanf("%i", &a);
	scanf("%i", &b);
	scanf("%i", &c);

	discriminant = (b * b - 4 * a * c);
	
	if(discriminant < 0)
	{
			printf("We don t have any real solutions \n");
			return 0;
	}
	
	result1 = (-b + squareRoot(discriminant)) / (2 * a);
	result2 = (-b - squareRoot(discriminant)) / (2 * a);
	
	if(result1 == result2)
			printf("The equation has only 1 solution %.1f \n", result1);

	else
			printf("the equation has 2 solution x = %f, x = %f \n", result1, result2);

	return 0;
}

float squareRoot(float num)
{
		const float epsilon = .0000001;
		float guess = 1.0;

		while(absoluteValue(((guess * guess) / num) - 1) >= epsilon)
		{
				guess = (num/guess + guess)/2.0;
		}

		return guess;
}

float absoluteValue(float num)
{
		if(num<0)
			num = -num;
		return num;
}






