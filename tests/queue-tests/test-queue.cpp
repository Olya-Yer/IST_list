#include <queue.hpp>
#include <limits.h>
#include <cstddef>
#include <assert.h>
#include <iostream>

void test_push_back()
{
	std::cout << "=============testing push_back()=======" << std::endl;
	int v0 = 0;
	int v1 = 1;
	int v2 = 2;
	int v3 = 3;
	int v4 = 4;
	Queue queue;
	queue.push_back(v0);
	assert(v0 == queue.back());
	queue.push_back(v1);
	assert(v1 == queue.back());
	queue.push_back(v2);
	assert(v2 == queue.back());
	queue.push_back(v3);
	assert(v3 == queue.back());
	queue.push_back(v4);
	assert(v4 == queue.back());
	std::cout << "push_back pass" << std:: endl;
}

void test_pop_front()
{
	std::cout << "=============testing pop_front()===========" << std::endl;
	int v0 = 0;
	int v1 = 1;
	int v2 = 2;
	int v3 = 3;
	int v4 = 4;
	Queue queue;
	queue.push_back(v0);
	queue.push_back(v1);
	queue.push_back(v2);
	queue.push_back(v3);
	queue.push_back(v4);
	assert(v0 == queue.front());
	assert(v0 == queue.pop_front());
	assert(v1 == queue.pop_front());
	assert(v2 == queue.front());
	assert(v2 == queue.pop_front());
	assert(v3 == queue.front());
	assert(v3 == queue.pop_front());
	assert(v4 == queue.front());
	assert(v4 == queue.pop_front());
	assert(true == queue.is_empty());
	std::cout << "pop_front pass" << std:: endl;
}

void test_back()
{
	std::cout << "=============testing back()===========" << std::endl;
	int v0 = 0;
	int v1 = 1;
	int v2 = 2;
	int v3 = 3;
	int v4 = 4;
	Queue queue;
	queue.push_back(v0);
	assert(v0 == queue.back());
	queue.push_back(v1);
	assert(v1 == queue.back());
	queue.push_back(v2);
	assert(v2 == queue.back());
	queue.push_back(v3);
	assert(v3 == queue.back());
	queue.push_back(v4);
	assert(v4 == queue.back());
	std::cout << "back() pass" << std:: endl;
}

void test_is_empty()
{
	std::cout << "=============testing is_empty()===========" << std::endl;
	int v0 = 0;
	int v1 = 1;
	int v2 = 2;
	int v3 = 3;
	int v4 = 4;
	Queue queue;
	assert(true == queue.is_empty());
	queue.push_back(v0);
	queue.push_back(v1);
	queue.push_back(v2);
	queue.pop_front();
	queue.pop_front();
	queue.pop_front();
	assert(true == queue.is_empty());
	std::cout << "is_empty() pass" << std:: endl;
}


void test_make_empty()
{
	std::cout << "=============testing make_empty()===========" << std::endl;
	int v0 = 0;
	int v1 = 1;
	int v2 = 2;
	int v3 = 3;
	int v4 = 4;
	Queue queue;
	queue.push_back(v0);
	queue.push_back(v1);
	queue.push_back(v2);
	queue.make_empty();
	assert(true == queue.is_empty());
	std::cout << "make_empty() pass" << std:: endl;
}


int main()
{
    test_push_back();
    test_pop_front();
    test_back();
    test_is_empty();
    test_make_empty();
    std::cout << "make unit test pass" << std::endl;
}
