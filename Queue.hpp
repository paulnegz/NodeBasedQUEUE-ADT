/*
Author: Negedu Paul
EECS - Lab 4
last modified: 04/04/2019
*/
using namespace std;
#include <stdexcept>
#include"Queue.h"
template <typename T>
Queue<T>::Queue() //constructor
{
    m_front = nullptr;
    m_back  = nullptr;
}

template <typename T>
Queue<T>::~Queue() //constructor
{
    clear();
    m_front = nullptr;
    m_back  = nullptr;
}

template <typename T>
bool Queue<T>::isEmpty() const
{
    return (m_front==nullptr);
}

template <typename T>
void Queue<T>::enqueue(const T &newEntry) 
{
    Node<T>* newNode = new Node<T>(newEntry);
    if (newNode == nullptr)
    {
        throw(PrecondViolatedExcep("Ran out of memory! Can't push onto stack"));
    }
    if (isEmpty())
    {
        m_back = newNode;
        m_front = m_back;
    }
    else
    {
        m_back->setNext(newNode);
        m_back=m_back->getNext();
    }
    newNode = nullptr;
}

template <typename T>
void Queue<T>::dequeue() 
{
    if (isEmpty())
    {throw(PrecondViolatedExcep("Nothing to dequeue"));}
    else
    {
        Node<T>* temp=m_front;
        m_front=m_front->getNext();
        delete temp;
        temp=nullptr;

        if(isEmpty())
        {
            m_back = nullptr;
        }
    }
}
template <typename T>
T Queue<T>::peekFront() const 
{
    if (isEmpty())
    {
        throw(PrecondViolatedExcep("Nothing to peek at"));
    }
    else
    {
        return (m_front->getEntry());
    }
}

template <typename T>
void Queue<T>::clear()
{
    while(!isEmpty())
    {
        dequeue();
    }
}

template <typename T>
void Queue<T>::toTheBack()
{
    Node<T>* temp=m_front;
    m_front=m_front->getNext();
    temp->setNext(nullptr);
    m_back->setNext(temp);
    m_back=temp;
    temp=nullptr;
}
