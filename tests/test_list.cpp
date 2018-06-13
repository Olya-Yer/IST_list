#include <list.hpp>
#include <limits.h>
#include <cstddef>
#include <assert.h>
#include <iostream>
void test_add()
{
	std::cout << "=============testing add()===========" << std::endl;
	List list;
	unsigned int i0 = 0;
	int v0 = 10;
	list.add(i0, v0);
	int r0 = list.get(i0);
	assert(v0 == r0);
	std::cout << "first add pass" << std::endl;
	
	unsigned int i1 = 1;
	int v1 = 20;
	list.add(i1, v1);
	int r1 = list.get(i1);
	assert(v1 == r1);
	std::cout << "add to the end pass" << std:: endl;

	int v3 = 30;
	list.add(i1, v3);
	int r3=list.get(i1);
	assert(v3 == r3);
	std::cout << "add between two nodes pass" << std:: endl;

	int v4 = 30;
	list.add(i0, v4);
	int r4=list.get(i0);
	assert(v4 == r4);
	std::cout << "add to the beginning pass" << std::endl;

	unsigned int i_wrong = 30;
	assert( false == list.add(i_wrong, v4));
	std::cout << "add to the wrong index pass" << std:: endl;
	
	std::cout << "add pass" << std:: endl;

}
void test_push()
{
	std::cout << "=============testing push()===========" << std::endl;
	int v = 1;
	List list;
	list.push(v);
	int r=list.get(0);

	int v1 = 2;
	list.push(v1);
	int r1=list.get(1);
	assert(v1 == r1);
	std::cout << "push pass" << std:: endl;
}
void test_pop()
{
	std::cout << "=============testing pop()===========" << std::endl;
	List list;
	int v = 1;
	list.push(v);
	list.push(v+1);
	list.push(v+2);

	list.pop();
	int v1 = v+1;
	int r = list.get_last();
	assert(v1 == r);
	
	list.pop();
	int r1 = list.get_last();
	assert(v == r1);

	std::cout << "pop pass" << std:: endl;
}
void test_remove()
{
	std::cout << "=============testing remove()===========" << std::endl;
	List list;
	int v = 0;
	int v1 = 1;
	int v2 = 2;
	int v3 = 3;
	int v4 = 4;
	list.add(0, v);
	list.add(1, v1);
	list.add(2, v2);
	list.add(3, v3);
	list.add(4, v+4);
	unsigned int i1 = 1;
	list.add(i1, v4);
	// 0, 4, 1, 2, 3, 4
	list.remove(i1);
	// 0, 1, 2, 3, 4
	int r1 = list.get(i1);
	assert(v1 == r1);
	std::cout << "remove from middle of the list pass" << std::endl;

	list.remove(0);
	// 1, 2, 3, 4
	int r0 = list.get_first();
	assert(v1 == r0); 
	std::cout << "remove from the start pass" << std:: endl;

	list.remove(3);
	// 1, 2, 3
	int r2 = list.get_last();
	assert(v3 == r2); 
	std::cout << "remove from end pass" << std::endl;

	unsigned int i_wrong = 20;
	assert( false == list.remove(i_wrong));
	std::cout << "remove from wrong index pass" << std::endl;
}
void test_search_by_value()
{
	std::cout << "=============testing remove()===========" << std::endl;
	List list;
	int v = 0;
	int v1 = 1;
	int v2 = 2;
	int v3 = 3;
	int v4 = 4;
	list.push(v);
	list.push(v1);
	list.push(v2);
	list.push(v3);
	list.push(v4);
	assert(0 == list.search_by_value(v));
	assert(1 == list.search_by_value(v1));
	assert(2 == list.search_by_value(v2));
	assert(3 == list.search_by_value(v3));
	assert(4 == list.search_by_value(v4));
	std::cout << "search by value test  pass" << std::endl;
}
void test_get()
{
	std::cout << "=============testing get()===========" << std::endl;
	List list;
	int v = 0;
	int v1 = 1;
	int v2 = 2;
	int v3 = 3;
	int v4 = 4;
	list.push(v);
	list.push(v1);
	list.push(v2);
	list.push(v3);
	list.push(v4);
	assert(v == list.get(0));
	assert(v1 == list.get(1));
	assert(v2 == list.get(2));
	assert(v3 == list.get(3));
	assert(v4 == list.get(4));
	assert(INT_MAX == list.get(5));
	std::cout << "get() test  pass" << std::endl;
}
void test_set()
{
	std::cout << "=============testing set()===========" << std::endl;
	List list;
	int v = 0;
	int v1 = 1;
	int v2 = 2;
	int v3 = 3;
	int v4 = 4;
	list.push(v);
	list.push(v1);
	list.push(v2);
	assert(true == list.set(0,v4));
	assert(v4 == list.get(0));
	assert(true == list.set(1,v3));
	assert(v3 == list.get(1));
	assert(true == list.set(2,v3));
	assert(v3 == list.get(2));
	assert(false == list.set(4,v3));
	std::cout << "get() test  pass" << std::endl;
}
void test_swap()
{
	std::cout << "=============testing swap()===========" << std::endl;
	List list;
	int v = 0;
	int v1 = 1;
	int v2 = 2;
	list.push(v);
	list.push(v1);
	list.push(v2);
	assert(true == list.swap(0,2));
	assert(v == list.get(2));
	assert(v2 == list.get(0));
	assert(false == list.swap(0,5));
	std::cout << "set() test  pass" << std::endl;
}

int main()
{
    test_add();
    test_push();
    test_pop();
    test_remove();
    test_search_by_value();
    test_get();
    test_set();
    test_swap();
    std::cout << "list unit test pass" << std::endl;
}
