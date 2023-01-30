/*
 * Name: Dawson Tomes
 * Date Submitted: 1/29/23
 * Lab Section: Section 1   
 * Assignment Name: Linked List Based Stacks and Queues
 */

#pragma once
#include <iostream>
#include <string>
#include <queue>
#include "List.h"
#include "Node.h"


//This class represents a Queue implemented via Linked List
//Do not modify anything in the class interface
template <class T>
class ListQueue{

 private:
  List<T> queue;

 public:
  ListQueue();
  ~ListQueue();
  int size();
  bool empty();
  void enqueue(T);
  T dequeue();
  //Print the name and this ListQueue's size and values to stdout
  //This function is already implemented (no need to change it)
  void print(string name){
    queue.print(name);
  }

}; //end of class interface (you may modify the code below)

//Implement all of the functions below

//Construct an empty ListQueue by initializing this ListQueue's instance variables
template <class T>
ListQueue<T>::ListQueue(){

    List<T> queueList;
    Node<T>* next = nullptr;
    queue = queueList;
}

//Destroy all nodes in this ListQueue to prevent memory leaks
template <class T>
ListQueue<T>::~ListQueue(){
}

//Return the size of this ListQueue
template <class T>
int ListQueue<T>::size(){
    
    return queue.size() - 1; //returns the size of the queue

}

//Return true if this ListQueue is empty
//Otherwise, return false
template <class T>
bool ListQueue<T>::empty(){
    return queue.empty(); //checks if the queue is empty
}

//Create a new node with value, and insert that new node
//into this ListQueue in its correct position
template <class T>
void ListQueue<T>::enqueue(T value){

   queue.insertEnd(value); //inserts a node at the end of the queue
}

//Dequeue an element from the queue.
//Note that here that means both removing it from the list
//AND returning the value
template <class T>
T ListQueue<T>::dequeue(){
    
    return queue.getFirst(); //removes (pops) a node at the end of the queue
    
}
