#pragma once
#include <iostream>

class IntNode{
 private:
  int data;
  IntNode *next;
 public:
  IntNode();
  IntNode(int data);
  IntNode(int data, IntNode *next);

  void setData(int data);
  void setNext(IntNode *next);

  int getData();
  IntNode *getNext();
};
