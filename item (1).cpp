#include "item.h"
using namespace std;
void print_all_items(Item* items_array, int number_of_items)
{
	
		for (int i = 0; i < number_of_items; i++)
		{
			if (items_array == NULL)
			{
				return;
			}
			
			cout << "Item " << (i+1) << " out of " << number_of_items << " with id " << items_array[i].id << " costs " << items_array[i].price << " nis." << endl;
		
		}
	
}



