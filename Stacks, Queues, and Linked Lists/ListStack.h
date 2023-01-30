/*
 * Name: Dawson Tomes
 * Date Submitted: 1/29/23
 * Lab Section: Section 1
 * Assignment Name: Linked List Based Stacks and Queues
 */

#pragma once
#include <iostream>
#include <stack>
#include <string>
#include "List.h"
#include "Node.h"

//This class represents a Stack implemented via Linked List
//Do not modify anything in the class interface
template <class T>
class ListStack{

 private:
  List<T> stack;

 public:
  ListStack();
  ~ListStack();
  int size();
  bool empty();
  void push(T);
  T pop();
  //Print the name and this ListStack's size and values to stdout
  //This function is already implemented (no need to change it)
  void print(string name){
    stack.print(name);
  }

}; //end of class interface (you may modify the code below)

//Implement all of the functions below

//Construct an empty ListStack by initializing this ListStack's instance variables
template <class T>
ListStack<T>::ListStack(){

    List<T> stackList;
    Node<T>* next = nullptr;
    stack = stackList;
}

//Destroy all nodes in this ListStack to prevent memory leaks
template <class T>
ListStack<T>::~ListStack(){
}

//Return the size of this ListStack
template <class T>
int ListStack<T>::size(){
    return stack.size() - 1; //returns the size of the stack
  
}

//Return true if this ListStack is empty
//Otherwise, return false
template <class T>
bool ListStack<T>::empty(){
    return stack.empty(); //checks to see if the stack is empty

}

//Create a node with value <value> and push it onto the stack
template <class T>
void ListStack<T>::push(T value){
    stack.insertStart(value); //inserts a value at the start of the stack
}

//Pop a node from the Stack.
//Note that here that includes both removing the node from the stack
//AND returning its value.
template <class T>
T ListStack<T>::pop() {
  
    return stack.getFirst(); //removes the first element in the stack
}
