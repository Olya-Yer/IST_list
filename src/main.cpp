#include <list.hpp>
#include <iostream>

int main()
{
	List* list = new List();
	std::cout << "Adding elements to the list" << std::endl;
	list->add(0,1); 
	list->add(1,2);
	list->add(1,3);
	list->print();
	list->add(0,4);
	list->print();
/*	std::cout << "search by value , v = 2" << std::endl;
	std::cout << list->search_by_value(2) << std::endl;
	std::cout << "get, i = 1" << std::endl;
	std::cout << list->search_by_value(2) << std::endl;
	std::cout << "swaping 0 and 1" << std::endl;
	list->swap(0,1);
	list->print();
	std::cout << "remove 1st and 2nd" << std::endl;
	list->remove(1);
	list->remove(2);
	list->print();
	delete list;*/
	return 0;
}
