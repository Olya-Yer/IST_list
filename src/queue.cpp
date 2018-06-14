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


