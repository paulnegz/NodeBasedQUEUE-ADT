/*
Author: Negedu Paul
EECS - Lab 4
last modified: 04/04/2019
*/
using namespace std;
//constructors
template <typename T>
Node<T>::Node()
{
  m_next = nullptr;
}
template <typename T>
Node<T>::Node(T value)
{
  m_entry=value;   
  m_next=nullptr;   
}
//setters
template <typename T>
void Node<T>::setEntry(T value)
{
  m_entry=value;
}
template <typename T>
void Node<T>::setNext(Node<T>* next)
{
  m_next=next;
}
//getters
template <typename T>
T Node<T>::getEntry() const
{
  return m_entry;
}
template <typename T>
Node<T> *Node<T>::getNext() const
{
  return m_next;
}
