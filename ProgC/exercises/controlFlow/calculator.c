/*
 * =====================================================================================
 *
 *       Filename:  calculator.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/26/16 09:14:31
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

int main(void)
{
		bool calc = true;
		float num;
		float result = 0.0f;
		char op;
		
		printf("Enter a num and an operand\n");
		
		while(calc)
		{
			scanf("%f %c", &num, &op);
			switch(op)
			{
					case 'S':
						result = num;
						printf("Set the result to %.2f \n", num);
						break;

					case '+':
						result += num;
						printf("result + %.2f = %.2f \n", num, result);
						break;
					
					case '-':
						result -= num;
						printf("result - %.2f = %.2f \n", num, result);
						break;

					case '*':
						result *= num;
						printf("result * %.2f = %.2f \n", num, result);
						break;

					case '/':
						if (num == 0.000000f)
						{
								printf("error\n");
						}
						result /= num;
						printf("result / %.2f = %.2f\n", num, result);
						break;
				    
					case 'E':
						printf("Exiting command \n");
						calc = false;
						break;

					default:
						printf("Don t understand the statement\n");
						break;
			}
		}

}
