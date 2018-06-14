#include <stack.hpp>
#include <limits.h>
#include <cstddef>
#include <assert.h>
#include <iostream>

void test_push()
{
	std::cout << "=============testing push()===========" << std::endl;
	int v0 = 0;
	int v1 = 1;
	int v2 = 2;
	int v3 = 3;
	int v4 = 4;
	Stack stack;
	stack.push(v0);
	assert(v0 == stack.peek());
	stack.push(v1);
	assert(v1 == stack.peek());
	stack.push(v2);
	assert(v2 == stack.peek());
	stack.push(v3);
	assert(v3 == stack.peek());
	stack.push(v4);
	assert(v4 == stack.peek());
	std::cout << "push pass" << std:: endl;
}

void test_pop()
{
	std::cout << "=============testing pop()===========" << std::endl;
	int v0 = 0;
	int v1 = 1;
	int v2 = 2;
	int v3 = 3;
	int v4 = 4;
	Stack stack;
	stack.push(v0);
	stack.push(v1);
	stack.push(v2);
	stack.push(v3);
	stack.push(v4);
	assert(v4 == stack.pop());
	assert(v3 == stack.peek());
	assert(v3 == stack.pop());
	assert(v2 == stack.peek());
	assert(v2 == stack.pop());
	assert(v1 == stack.peek());
	assert(v1 == stack.pop());
	assert(v0 == stack.peek());
	assert(v0 == stack.pop());
	assert(true == stack.is_empty());
	std::cout << "pop pass" << std:: endl;
}

void test_peek()
{
	std::cout << "=============testing peek()===========" << std::endl;
	int v0 = 0;
	int v1 = 1;
	int v2 = 2;
	int v3 = 3;
	int v4 = 4;
	Stack stack;
	stack.push(v0);
	assert(v0 == stack.peek());
	stack.push(v1);
	assert(v1 == stack.peek());
	stack.push(v2);
	assert(v2 == stack.peek());
	stack.push(v3);
	assert(v3 == stack.peek());
	stack.push(v4);
	assert(v4 == stack.peek());
	std::cout << "peek() pass" << std:: endl;
}

void test_is_empty()
{
	std::cout << "=============testing is_empty()===========" << std::endl;
	int v0 = 0;
	int v1 = 1;
	int v2 = 2;
	int v3 = 3;
	int v4 = 4;
	Stack stack;
	assert(true == stack.is_empty());
	stack.push(v0);
	stack.push(v1);
	stack.push(v2);
	stack.pop();
	stack.pop();
	stack.pop();
	assert(true == stack.is_empty());
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
	Stack stack;
	stack.push(v0);
	stack.push(v1);
	stack.push(v2);
	stack.make_empty();
	assert(true == stack.is_empty());
	std::cout << "make_empty() pass" << std:: endl;
}


int main()
{
    test_push();
    test_pop();
    test_peek();
    test_is_empty();
    test_make_empty();
    std::cout << "make unit test pass" << std::endl;
}
