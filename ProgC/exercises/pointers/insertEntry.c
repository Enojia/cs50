/*
 * =====================================================================================
 *
 *       Filename:  insertEntry.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  25/04/2016 10:31:32
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
		struct Entry *next;
};

void insertEntry(struct Entry *listInsert, struct Entry *listEntry)
{
		struct Entry *temp = listEntry -> next;
		listEntry->next = listInsert;
		listInsert->next = temp;
}

void removeEntry(struct Entry *listEntry)
{
		struct Entry *temp = (listEntry->next)->next;
		listEntry->next = temp;
}

int main(void)
{
		struct Entry first, second, third, fourth;
		struct Entry begining;
		first.value = 10;
		second.value = 14;
		third.value = 17;
		fourth.value = 90;
		begining.next = &first;
		first.next = &second;
		second.next = &third;
		third.next = (struct Entry *) 0;

		insertEntry(&fourth, &second);
		removeEntry(&fourth);

		printf("%i\n", fourth.next);
}
