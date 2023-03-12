#pragma once
#include "IntNode.h"
#include <iostream>

class OList{
    private:
        IntNode *head;

    public:
        OList();
        ~OList();
        void insert(int data);
        std::string toString();
        bool contains(int item);
        int get(int loc);
        void remove(int loc);
        void reverse();
};