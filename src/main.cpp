#include <list.hpp>
#include <stack.hpp>
#include <queue.hpp>
#include <iostream>

void quick_sort(List& l, int left, int right);

int main()
{
	List* list = new List();
	std::cout << "Adding elements to the list" << std::endl;
	list->add(0,7); 
	list->add(1,20);
	list->add(2,1);
	list->print();
	int size = list->get_size();
	quick_sort(*list,0,size-1);
	list->print();
	return 0;
}


void quick_sort(List& l, int left, int right)
{
	int i = left;
	int j = right;
	int m = (int) (left + right)/2;
	int pivot = l.get(m);

	while (i < j){
		while (l.get(i) < pivot && !(i>right)) {
			++i;
		}
		while (l.get(j) > pivot && !(j<0)) {
			--j;
		}
		if (i <= j){
			l.swap(i, j);
			++i;
			--j;
		}
	}
	if (left < j) {
		quick_sort (l, left , j);
	}
	if (i < right) {
		quick_sort (l , i, right);
	}
}

