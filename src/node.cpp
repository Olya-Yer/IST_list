#include <iostream>
#include <node.hpp>

Node::Node():value(0), previous(0), next(0)
{}

Node::~Node()
{
	delete next;
}
