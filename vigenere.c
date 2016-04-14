/*
 * =====================================================================================
 *
 *       Filename:  vigenere.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  14/04/2016 10:22:36
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
#include <string.h>
#include <ctype.h>


int main(int argc, string argv[])
{
		string message;
		string vigMessage;
		char alphabet[] = "abcdefghijklmnopqrstwxyz";

		//check the user argument
		if(argc != 2)
		{
				printf("Error invalid number of arguments");
				return 1;
		}		
		
		for(int i = 0; i < strlen(argv); i++)
		{
				if(isalpha(argv[1]) != 1)
				{
					printf("Error invalid argument");
					return 1;	
				}
		}
		
		//prompt for the user input message
		
		message = GetString();

		for(int i = 0, j = 0; i < strlen(argv[1]); i++, j++)
		{
				if(j >= strlen(argv[1]))
				{
						j = 0;
				}
				
				if(isalpha(message[i]))
				{
						if(islower(message[i]))
								vigMessage[i] = convertChar(message[i], argv[1][j], alphabet);

						else
						{
								char temp = tolower(message[i]);
								vigMessage[i] = toupper(convertChar(message[i], argv[1][j], alphabet));
						}
				}

				else
				{
						vigMessage[i] = message[i];		
				}

		}

		return 0;
}

char convertChar(char mess, char key, char alphabet[])
{
		char* pChar = strchr(alphabet, mess);
		int index = pChar - alphabet;

		pChar = strchr(alphabet, key);
		int Kindex = pChar - alphabet;
		
		return alphabet[(index + Kindex) % 26];
}
