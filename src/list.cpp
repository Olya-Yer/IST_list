#include <list.hpp>
#include <iostream>
#include <limits.h>
#include <cstddef>
#include <assert.h>

List::List():first(0),last(0),size(0)
{}

List::List(int v):first(0),last(0),size(0)
{
	add(0,v);
}

bool List::add(unsigned int i, int v)
{
	if((0 != i) && is_out(i - 1)){
		return false;
	}
	if(0 == size || size == i){
		return push(v);
	}
	Node* new_node = new Node();
	new_node->value = v;
	assert(NULL != new_node);
	Node* old = get_node(i);
	Node* p = old->previous;
	if(p) {
		p->next = new_node;
		new_node->previous = p;
	}
	new_node->next = old;
	old->previous = new_node;
	if(0 == i) {
	    first = new_node;
	}
	++size;
	return true;
}

bool List::push(int v)
{
	Node* new_node = new Node();
	new_node->value = v;
	if(0 == size){
		first = new_node;
		last = new_node;
		++size;
		return true;    
	}
	Node* temp = last;
	new_node->previous = temp;
	temp->next = new_node;
	last = new_node;
	++size;
	if(last->previous) {
		return true;
	}
	return false;
}

bool List::pop()
{
	if(0 == size) {
		return true;
	}
	if(1 == size) {
		delete first;
		first = NULL;
		last = NULL;
		--size;
		return true;
	}
	Node* old = last;
	assert(NULL != old);
	last = last->previous;
	last->next = NULL;
	assert(NULL != last);
	old->previous = NULL;
	delete old;
	--size;
	if(last) {
		return true;
	}
	return false;
}


bool List::remove(unsigned int i)
{
	if(is_out(i)) {
		return false;
	}
	if(size -1 == i) {
		return pop();
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
	old->next = NULL;
	old->previous = NULL;
	delete old;
	if(0 == i) {
		first = n;
	}
	--size;
	return true;
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

int List::get(unsigned int i) const
{
	int r = INT_MAX;
	if(is_out(i)) {
		return r;
	}	
	const Node* n = get_node(i);
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

void List::print()
{
	int s = size;
	Node* n = first;
	while( (NULL != n)) {
		std::cout << n->value << ", " ;
		n = n->next;
		--s;
	}
	std::cout <<std::endl;
}

int List::get_first()
{
	if(NULL != first) {
		return first->value;
	}
	return INT_MAX;
}

int List::get_last()
{
	if(NULL != last) {
		return last->value;
	}
	return INT_MAX;
}

bool List::is_out(unsigned int i) const
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
	while( r != i) {
		Node* next = n->next;
		n = next;
		++r;
	}
	assert(NULL != n);
	return n;
}
List::~List()
{
	delete first;
}

