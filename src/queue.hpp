#ifndef QUEUE_HPP
#define QUEUE_HPP
#include <list.hpp>


class Queue: private List
{
	public:
		/**
		 * @brief default constructor
		 */
		Queue();
		/**
		 * @brief overloaded constructor
		 * @detail creates a stack with one element that has the 
		 *	    given value
		 */
		Queue(int);
		/**
		 * @brief adds the given element to the queue
		 * @param int the value
		 * @return void
		 */
		void push_back(int);
		/**
		 * @brief removes the first element of the queue and returns
		 *	    the value
		 *@return returnes the value of the last elemenet if exists,
		 *	    INT_MAX otherwise
		 */
		int pop_front();
		/**
		 * @brief deletes all the memebers of the queue
		 * return void;
		 */
		void make_empty();
		/**
		 * @brief returnes the fisrt element of the queue;
		 * @return returnes the first element of the queue if exists
		 *	    INT_MAX otherwise
		 */
		int front();
		/**
		 * @brief returnes the last element of the queue;
		 * @return returnes the last element of the queue if exists
		 *	    INT_MAX otherwise
		 */
		int back();
		/**
		 * @brief returnes the size of the queue;
		 * @return returnes the size of the queue
		 */
		int get_size();
		/**
		 * @brief checks if the queue is empty
		 * @return true if the queue is empty, false otherwise
		 */
		bool is_empty();
		/**
		 * @brief prints the queue
		 */
		void print();
};

#endif
