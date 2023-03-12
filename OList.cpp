#include "IntNode.h"
#include "OList.h"
#include <iostream>

OList::OList(){
    head == nullptr;
}
OList::~OList(){
    IntNode *walker = head;
    IntNode *trailer = nullptr;
    while (walker != nullptr){
        trailer = walker;
        walker = walker ->getNext();
        delete trailer;
    }   
}

void OList::insert(int data){
    IntNode *tmp = new IntNode(data);
    IntNode *walker, *trailer;
    walker = head;
    trailer = nullptr;
    while(walker != nullptr && tmp->getData() > walker->getData()){
        trailer = walker;
        walker = walker->getNext();
    }
    tmp->setNext(walker);
    if (trailer != nullptr){
        trailer->setNext(tmp);
    }
    else{
        head = tmp;
    }
}

std::string OList::toString(){
    IntNode *tmp = head;
    std::string result = "";
    while (tmp!= nullptr){
        result = result + std::to_string(tmp-> getData());
        result = result + "-->";
        tmp = tmp->getNext();
    }
    result = result + "nullptr";
    return result;
}

bool OList::contains(int item){
    IntNode *tmp = head;
    while(tmp != nullptr && tmp->getData() <= item){
        if(tmp->getData() == item) return true;
        tmp = tmp->getNext();
    }
    return false;
}

int OList::get(int loc){
    IntNode *tmp = head;
    while(tmp != nullptr && loc > 0){
        tmp = tmp->getNext();
        loc--;
    }
    if(tmp == nullptr) throw std::out_of_range ("OList index out of range");
    return tmp->getData();
}

void OList::remove(int loc){
    IntNode *walker, *trailer;
    walker = head;
    trailer = nullptr;
    while(walker != nullptr && loc > 0){
        trailer = walker;
        walker = walker->getNext();
        loc--;
    }
    if(walker == nullptr) throw std::out_of_range ("OList index out of range");
    if(trailer == nullptr) head = walker->getNext();
    else trailer->setNext(walker->getNext());
    delete walker;
}

void OList::reverse(){
    if (head == nullptr) return;
    IntNode *walker, *trailer, *slower;
    walker = head;
    trailer = nullptr;
    slower = nullptr;
    while(walker != nullptr){
        slower = trailer;
        trailer = walker;
        walker = walker->getNext();
        trailer->setNext(slower);
    }
    head = trailer;
}

