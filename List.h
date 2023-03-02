#pragma once
#include "Node.h"
#include <iostream>

class List{
    private:
        Node *head;

    public:
        List();
        void insert(std::string data);
        std::string toString();
        void insert(int loc, std::string data);
        int length(); 
        std::string get(int loc);
        bool contains(std::string item);
        void remove(int loc);


        /*
        ~List();


        void remove(int loc);


    */
};