#ifndef _ITEM_H_
#define _ITEM_H_

#include <iostream>

//********************/
// structs
//********************/
typedef struct Item
{
	long id;
	float price;
} Item, * ItemPtr;


//********************/
// Function Declerations
//********************/
void print_all_items(Item* items_array, int number_of_items);
#endif //_ITEM_H_