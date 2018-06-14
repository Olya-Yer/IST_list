#include <iostream>
#include <stack.hpp>

Stack::Stack()
{
}

Stack::Stack(int v):List(v)
{
}

bool Stack::push(int v)
{
    return List::push(v);
}

int Stack::pop()
{
	int v = last->value;
	List::pop();
	return v;
}

int Stack::peek()
{
	return last->value;
}

bool Stack::is_empty()
{
	return NULL == first;
}

bool Stack::make_empty()
{
	while(!is_empty()) {
		List::pop();
	}
	return true;
}

unsigned int Stack::get_size()
{
	return List::get_size();
}

void Stack::print()
{
	List::print();
}
