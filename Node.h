/*
Author: Negedu Paul
EECS - Lab 4
last modified: 04/04/2019
*/
#ifndef NODE_H
#define NODE_H
#include <iostream>
#include <string>
using namespace std;
template <typename T>
class Node
{
private:
	T m_entry;
	Node<T>* m_next;

public:
  //two constructors overlaoded
  Node();
  /**
	* @pre NONE
	* @post initializing entry to zero and next pointer to nullptr
	**/
  Node(T value);
  /**
	* @pre NONE
	* @post The node is populated with value
	* @param value: interger
	**/
  //SETTERs
  void setEntry(T value);
  /**
	* @pre object of node class has been created.
	* @post The entry is replaced with the value
	* @param value:  interger
	**/
  void setNext(Node<T> *next); 
  /**
	* @pre object of node class has been created.
	* @post The node points to next node pointer
	* @param value:  interger
	**/

  //GETTERS
  T getEntry() const;
  /**
	* @pre object of node class has been created.
	* @post value is returned
	**/
  Node<T> *getNext() const;
  /**
	* @pre object of node class has been created.
	* @post pointer to the next node is created
	**/
};
#include"Node.hpp"
#endif

