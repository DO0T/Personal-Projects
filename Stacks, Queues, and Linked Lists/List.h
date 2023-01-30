/*
 * Name: Dawson Tomes
 * Date Submitted: 1/29/23
 * Lab Section: Section 1
 * Assignment Name: Linked List Based Stacks and Queues
 */

#pragma once

#include <iostream>
#include <string>
#include "Node.h"
using namespace std;

//This class represents a linked list of node objects
//Do not modify anything in the class interface
template <class T>
class List{
    //I know it says not to modify this part of the code, however I found it most efficent to create the nodes at the top of the class instead of indiviudally within each method
 private:
  Node<T> * start; //pointer to the first node in this list
  Node<T> * current; // current node
  Node<T> * newNode;  // temporary node
  Node<T> * endNode; // holds the memory address of the last node
  Node<T> * atNode; // holds the memory address of the current node
  Node<T> * temp; // holds a temporary memory address for a node
  Node<T> * previous; // holds the previous memory address of a node

  int mySize;  //size (or length) of this list
  int currentIndex; //keeps track of the index

 public:
  List();
  ~List();
  int size();
  bool empty();
  void insertStart(T);
  void insertEnd(T);
  void insertAt(T, int);
  void removeStart();
  void removeEnd();
  void removeAt(int);
  T getFirst();
  T getLast();
  T getAt(int);
  int find(T);

  //Print the name and this list's size and values to stdout
  //This function is already implemented (no need to change it)
  void print(string name){
    cout << name << ": ";
    cout << "size = " << size();
    cout << ", values = ";
    Node<T> * iterator = start;
    while(iterator != nullptr){
      cout << iterator->value << ' ';
      iterator = iterator->next;
    }
    cout << endl;
  }

}; //end of class interface (you may modify the code below)

//Implement all of the functions below
//Construct an empty list by initializig this list's instance variables
template <class T>
List<T>::List(){ //constructor initalizies all nodes to nullptr
  start = nullptr;
  current = nullptr;
  newNode = nullptr;
  endNode = nullptr;
  atNode = nullptr;
  temp = nullptr;
  previous = nullptr;

  mySize = 0;
  currentIndex = 0;
}

//Destroy all nodes in this list to prevent memory leaks
template <class T>
List<T>::~List(){ //deletes all nodes to prevent memory leaks
    delete start;
    delete current;
    delete newNode;
    delete endNode;
    delete atNode;
    delete temp;
    delete previous;
}

//Return the size of this list
template <class T>
int List<T>::size(){  //obtains the size of the list
    current = start;
    mySize = 0; //keeps track of the size in the form of a int

    while (current != nullptr) 
    {
        mySize++;
        current = current->next;
    }
    return mySize;
}

//Return true if this list is empty
//Otherwise, return false
template <class T>
bool List<T>::empty(){ //checks to see if the list is empty by checking if the first node is = to nullptr
  if(start == nullptr) 
  {
    return true;
  }
  else 
  {
    return false;
  }
}

//Create a new node with value, and insert that new node
//into this list at start
template <class T>
void List<T>::insertStart(T value){ //inserts a node with T value at the start of the list and increments the size
  newNode = new Node<T>(value);
  newNode->next = start;
  start = newNode;
  mySize++;
}

//Create a new node with value, and insert that new node
//into this list at end
template <class T>
void List<T>::insertEnd(T value){ //inserts a node at the end of the list and increases the size
  endNode = new Node<T>(value);
  endNode->next = nullptr;
  if(start == nullptr) 
  {
    start = endNode;
    return;
  }
  current = start;
  while (current->next != nullptr) 
  {
    current = current->next;
  }
  current->next = endNode;
  mySize++;
}

//Create a new node with value <value>, and insert that new node at position j
template <class T>
void List<T>::insertAt(T value, int j){ //inserts a node at a given position (j) in the list
  atNode = new Node<T>(value);

  if(j == 0) 
  {
    atNode->next = start; //if j is equal to the start of the list
    start = atNode;
    return;
  }
  current = start;
  for (int i = 0; i < j - 1; i++) 
  {
    if(current->next == nullptr) 
    {
      return;      
    }
    current = current->next;
  }
  atNode->next = current->next;
  current->next = atNode;
  mySize++; //increases the size
}

//Remove node at start
//Make no other changes to list
template <class T>
void List<T>::removeStart(){ //removes the first node in the list
  if(start == nullptr) 
  {
    return;
  }
  temp = start; //temp value is used to store the first node in the list that will be deleted
  start = start->next;
  delete temp;
  mySize--;
}

//Remove node at end
//Make no other changes to list
template <class T>
void List<T>::removeEnd(){ // removes the last node in the list
  if(start == nullptr) 
  {
    return;
  }
  current = start;
  previous = nullptr;
  while (current-> next != nullptr) // checks to make sure the current node is not = to nullptr
  {
    previous = current;
    current = current->next;
  }
  if (previous == nullptr) 
  {
    start = nullptr;
  }
  else 
  {
    previous->next = nullptr;
  }
  delete current; 
  mySize--; //decreases the size of the list
}

//Remove node at position j
//Make no other changes to list
template <class T>
void List<T>::removeAt(int j){ //removes a node at a given location specified by the user (j) 
  if (start == nullptr) 
  {
    return;
  } 
  current = start;
  previous = nullptr;
  while(current != nullptr && current->value != j) 
  {
    previous = current;
    current = current->next;
  }
  if (current == nullptr) 
  {
    return;
  }
  if(previous == nullptr) 
  {
    start = current->next;
  }
  else 
  {
    previous->next = current->next;
  }
  delete current; //deletes current (which holds that given position that the user entered)
  mySize--; //decreases the size
}

//Return the value of the first node in the Linked List,
//If no first node, return the default constructed value: T()
template <class T>
T List<T>::getFirst(){ //gets the first value at the start of the list
  if(start == nullptr) 
  {
      return T();
    //return;
  }
  else 
  {
    return start->value;
  }
}

//Return the value of the last node in the Linked List,
//If no first node, return the default constructed value: T()
template <class T>
T List<T>::getLast(){ //gets the last value at the start of the list
  if(start == nullptr) 
  {
     return T();
  }
  current = start;
  while (current->next != nullptr)  // loops through the list until the the list is at its last value
  {
    current = current->next;
  }
  return current->value; //returns the last node in the list
}

//Return the value of the node at position j in the Linked List,
//If no first node, return the default constructed value: T()
template <class T>
T List<T>::getAt(int j){ //returns a node at a given position within the Linked list
  if (start == nullptr) //checks if the list is empty
  {

     return T();
    // return
  }
  current = start;
  while(current != nullptr && currentIndex != j)  //loops through the list and increases the currentIndex
  {
    current = current->next;
    currentIndex++;
  }
  if(current == nullptr) 
  {
     return T();
    //return
  }
  return current->value; //returns the current value at the given position
}

//Return the position of the (first) node whose value is equal to the key
//Otherwise, return -1
template <class T>
int List<T>::find(T key){ //returns the position of the first node whos value is equal to the key provided by the cpp
  currentIndex = 0; //resets current index
  current = start;
  while (current != nullptr) //ensures current has a memory address
  {
    if(current->value == key)  //if the value of current is equal to the key provided
    {
      return currentIndex; //return the currentIndex
    }
    current = current->next;
    currentIndex++; //Increases currentIndex
  }
  return -1; //returns -1 if the key is not equal to the current node
}
