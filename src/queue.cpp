#include <queue.hpp>
#include <iostream>

Queue::Queue()
{
}

Queue::Queue(int v): List(v)
{
}

void Queue::push_back(int v)
{
	List::push(v);
}

int Queue::pop_front()
{
	int r = List::get_first();
	List::remove(0);
	return r;
}

int Queue::front()
{
	return List::get_first();
}

int Queue::back()
{
	return List::get_last();
}

bool Queue::is_empty()
{
	return NULL == first;
}

void Queue::make_empty()
{
	while(!is_empty()) {
		List::pop();
	}
	return;
}

int Queue::get_size()
{
	return List::get_size();
}

void Queue::print()
{
	List::print();
}
