#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_DEPRECATE
#define _CRT_NONSTDC_NO_DEPRECATE

#include <math.h>
#include <stdio.h>
#include <iostream>
#include <cstring>
#include <stdlib.h>


#include "item.h"

using namespace std;
//********************/
// CODE
//********************/

int main()
{
	cout << 323001245 << endl;
	cout << 322513444 << endl;
	int k = 0;
	cout << "Please choose the maximum item capacity" << endl;
	cin >> k;
	Item* items_array = new Item[k];
	cout << "A storage house was created.It has enough space for " << k << " items " << endl;
	if (items_array == NULL)
	{
		return 0;
	}
	for (int i = 0; i < k; i++)
	{
		items_array[i].id = 0;
		items_array[i].price = 0;
	}
	do
	{
		cout << "Please choose an action" << endl;
		static int i = 0;
		char action;
		cin >> action;		
		if (action == 'a')
		{
			
			if (i == k)
			{
				cout << "No space left for new items" << endl;
				continue;
			}
			if (i < k)
			{
	
				cout << "Please enter the item id" << endl;
				cin >> items_array[i].id;
				cout << "Please enter the item price" << endl;
				cin>> items_array[i].price;
				cout << "New item added" << endl;
				
			}
			i++;
		}
		if (action == 'p')
		{
			print_all_items(items_array,i);
		}
		if (action == 'q')
		{
			cout << "See you next time" << endl;
			break;
		}
		if (action != 'a' && action != 'p' && action != 'q')
		{
			cout << "Not a valid action" << endl;
			continue;
		}
		
	} while (true);
	delete[]items_array;
	return 0;
}
