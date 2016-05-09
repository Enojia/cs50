/*
 * =====================================================================================
 *
 *       Filename:  doublyLinkList.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  25/04/2016 13:33:50
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

struct Entry
{
		int value;
		struct Entry *previousPtr;
		struct Entry *nextPtr;
};

void insertEntry(struct Entry *eltPtr, struct Entry *positionPtr)
{
		eltPtr->previousPtr = positionPtr->previousPtr;
		eltPtr->nextPtr = positionPtr;
		positionPtr->previousPtr->nextPtr = eltPtr;
		positionPtr->previousPtr = eltPtr;

}

void removeEntry(struct Entry *positionPtr)
{
		positionPtr->previousPtr->nextPtr = positionPtr->nextPtr;
		positionPtr->nextPtr->previousPtr = positionPtr->previousPtr;
}

int main(void)
{
		struct Entry a, b, c, d;
		struct Entry *iterator = &a;
		
		a.value = 1;
		a.previousPtr = (struct Entry *) 0;
		a.nextPtr = &b;

		b.value = 2;
		b.previousPtr = &a;
		b.nextPtr = &c;

		c.value = 3;
		c.previousPtr = &b;
		c.nextPtr = (struct Entry *) 0;

		d.value = 4;

		insertEntry(&d, &b);
		
		while(iterator != (struct Entry *) 0)
		{
				printf("%i\n", iterator->value);
				iterator = iterator->nextPtr;
		}

}
