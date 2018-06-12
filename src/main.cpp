#include <list.hpp>
#include <iostream>

int main()
{
	List* list = new List();
	std::cout << list->add(0,1) <<std::endl;
//	// implement to add nodes with value 0 in between
//	std::cout << list->get(1) << std::endl;
	std::cout << list->add(1,2) <<std::endl;
	std::cout << list->add(1,3) <<std::endl;
//	std::cout << list->add(1,4) <<std::endl;
//	std::cout << list->search_by_value(2) << std::endl;
//	list->swap(0,1);
//	std::cout << list->get(0) << std::endl;
//	std::cout << list->get(1) << std::endl;
	return 0;
}
