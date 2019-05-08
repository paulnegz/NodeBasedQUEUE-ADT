/*
Author: Negedu Paul
EECS - Lab 4
last modified: 04/04/2019
*/
#ifndef QUEUE_INTERFACE
#define QUEUE_INTERFACE

#include "PrecondViolatedExcep.h"

template <class T>
class QueueInterface

{
  public:
	/** Virtual destructor allows concrete implementations to clean up
       heap memory when the Queue is discarded. */

	virtual ~QueueInterface() {}
	/** Sees whether this queue is empty.
    @return True if the queue is empty, or false if not. */

	virtual bool isEmpty() const = 0;

	/** Adds a new entry to the back of this queue.
    @post If the operation was successful, newEntry is at the back of the queue.
    @param newEntry  The object to be added as a new entry.
    @throw PrecondViolatedExcep if no memory available for the new item */

	virtual void enqueue(const T &newEntry)   = 0;

	/** Removes the front of this queue.
    @post If the operation was successful, the front of the queue has been removed.
    @throw PrecondViolatedExcep if the queue is empty when called */

	virtual void dequeue()   = 0;

	/** Returns the front of this queue.
    @pre The queue is not empty.
    @post The front of the queue has been returned, and the queue is unchanged.
    @throw PrecondViolatedExcep if the queue is empty when called */

	virtual T peekFront() const   = 0;
}; // end QueueInterface
#endif