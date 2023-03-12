#include <iostream>
#include "IntNode.h"

IntNode::IntNode() : next(nullptr)
{
}

IntNode::IntNode(int data, IntNode *next){
  this->data = data;
  this->next = next;
  
}

IntNode::IntNode(int data){
  this->data = data;
  this->next = nullptr;
}

void IntNode::setData(int data){
  this->data = data;
}

void IntNode::setNext(IntNode *next){
  this->next = next;
}

int IntNode::getData(){
  return this->data;
}

IntNode *IntNode::getNext(){
  return this->next;
}
