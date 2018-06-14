#ifndef QUEUE_HPP
#define QUEUE_HPP
#include <list.hpp>


class Queue: private List
{
	public:
		Queue();
		Queue(int);
		void push_back(int);
		int pop_front();
		bool make_empty();
		int front();
		int back();
		int get_size();
		bool is_empty;
}

#endif
