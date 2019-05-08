/*
Author: Negedu Paul
EECS - Lab 4
last modified: 04/04/2019
*/
#ifndef QUEUE_H
#define QUEUE_H

#include <string>
#include "QueueInterface.h"
#include "Node.h"
using namespace std;

//inheritting from Queue Interface
template <typename T>
class Queue : public QueueInterface<T>
{
  private:
    Node<T>* m_front;
    Node<T>* m_back;
    void toTheBack();
    void clear();

  public:
    Queue();

    /** Virtual destructor allows concrete implementations to clean up
       heap memory when the Queue is discarded. */

    ~Queue();

    /** Sees whether this queue is empty.
    @return True if the queue is empty, or false if not. */

    bool isEmpty() const;

    /** Adds a new entry to the back of this queue.
    @post If the operation was successful, newEntry is at the back of the queue.
    @param newEntry  The object to be added as a new entry.
    @throw PrecondViolatedExcep if no memory available for the new item */

    void enqueue(const T &newEntry);

    /** Removes the front of this queue.
    @post If the operation was successful, the front of the queue has been removed.
    @throw PrecondViolatedExcep if the queue is empty when called */
    void dequeue();

    /** Returns the front of this queue.
    @pre The queue is not empty.
    @post The front of the queue has been returned, and the queue is unchanged.
    @throw PrecondViolatedExcep if the queue is empty when called */
    T peekFront() const;

};
#include "Queue.hpp"
#endif
