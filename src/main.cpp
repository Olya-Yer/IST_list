#include <list.hpp>
#include <iostream>

int main()
{
	List* list = new List();
	list->add(0,1); 
//	// implement to add nodes with value 0 in between
	list->add(1,2);
	list->add(1,3);
	list->add(1,4);
	list->print();
	list->swap(0,1);
	list->print();
	return 0;
}
