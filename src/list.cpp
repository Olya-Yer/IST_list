#ifndef LIST_HPP
#define LIST_HPP

#include <list.hpp>
#include <iostream>
#include <limits.h>
#include <cstddef>
#include <assert.h>

List::List():first(0),last(0),size(0)
{}

List::List(int v):first(0),last(0),size(0)
{
	first = new Node();
	last = first;
	first->value = v;
	++size;
}

bool List::add(unsigned int i, int v)
{
	std::cout<< "index" << i <<std::endl;
	std::cout<< "value" << v <<std::endl;
	if((0 != i) && is_out(i - 1)) {
		return false;
	}
	Node* new_node = new Node();
	new_node->value = v;
	assert(NULL != new_node);
	if(0 == size) {
		first = new_node;
		last = new_node;
		++size;
		return true;
	}
	if( size == i){
		last->next = new_node;
		new_node->previous = last;
		last = new_node;
		++size;
		return true;
	}
	Node* p = get_node(i);
	std::cout << "pointer " << p << std::endl;
	Node* n = p->next;
	assert(NULL !=n);
	p->next=new_node;
	new_node->previous = p;
	if(n) {
	    assert(NULL != n);
	    new_node->next = n;
	    n->previous = new_node;
	}
	++size;
	return true;
}


bool List::remove(unsigned int i)
{
	if(this->is_out(i)) {
		return false;
	}
	
	Node* old = get_node(i);
	assert(NULL != old);
	Node* p = old->previous;
	Node* n = old->next;
	if(p) {
		p->next = n;
	}
	if(n) {
		n->previous = p;
	}
	p->next = NULL;
	p->previous = NULL;
	delete p;
	if(0 == i) {
		first = n;
	}
}

int List::search_by_value(int v)
{
	Node* n = first;
	assert(NULL != n);
	int i = 0;
	while(n) {
		if(n->value == v) {
			return i;
		}
		n = n->next;
		++i;
	}
	return -1;
}

int List::get(unsigned int i) //const
{
	int r = INT_MAX;
	if(is_out(i)) {
		return r;
	}	
	Node* n = get_node(i);
	assert(NULL != n);
	int result = n->value;
	return result;
}

bool List::set(unsigned int i, int v)
{
	if(is_out(i)) {
		return false;
	}
	Node* n = get_node(i);
	assert(NULL != n);
	n->value = v;
	return true;
}

bool List::swap(unsigned int i, unsigned int j)
{
	if(is_out(i) || is_out(j)) {
		return false;
	}
	if(i == j) {
		return true;
	}
	Node* ni = get_node(i);
	assert(NULL != ni);
	Node* nj = get_node(j);
	assert(NULL != nj);
	int temp = ni->value;
	ni->value = nj->value;
	nj->value = temp;
	return true;
}

bool List::is_out(unsigned int i) const
{
	if(i >= size) {
		return false;
	}
	return true;
}

bool List::is_out(unsigned int i)
{
	if(i < size) {
		return false;
	}
	return true;
}

Node* List::get_node(unsigned int i)
{
	if(is_out(i)) {
		return NULL;
	}
	int r=0;
	Node* n = first;
	assert(NULL != n);
	while( r != i) {
		std::cout <<  "r is " << r << std::endl;
		std::cout <<  "i is " << i << std::endl;
		Node* next = n->next;
		n = next;
		++r;
	}
	assert(NULL != n);
	return n;
}

const Node* List::get_node(unsigned int i) const
{
	if(is_out(i)) {
		return NULL;
	}
	int r=0;
	Node* n = first;
	assert(NULL != n);
	while(r != i ) {
		n = n->next;	
		++i;
	}
	assert(NULL != n);
	return n;
}


#endif
