#include <list.hpp>

int main()
{

	List list;
	unsigned int i = 0;
	int v = 10;
	list.add(i, v);
	int r=list.search_by_index(i);
	assert(v == r);

	int ri = list.search_by_value(v);
	assert(i == ri);
	
	unsigned int i1 = i+1;
	int v1 = v+1;
	int v2 = v+2;

	list.add(i1, v1);
	list.set(i1,v2);

	int r1 = list.search_by_index(i1);
	assert(v2 == r1);

	int i2 = list.search_by_value(v2);
	assert( i1 == i2);




}
