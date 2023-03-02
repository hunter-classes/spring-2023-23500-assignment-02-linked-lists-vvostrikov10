#include "List.h"
#include "Node.h"
#include <iostream>

List::List(){
    head = nullptr;
}

void List::insert(std::string data){
    Node *tmp = new Node(data);
    tmp->setNext(head);
    head = tmp;
}

std::string List::toString(){
    Node *tmp = head;
    std::string result = "";
    while (tmp!= nullptr){
        result = result + tmp-> getData();
        result = result + "-->";
        tmp = tmp->getNext();
    }
    result = result + "nullptr";
    return result;
}

int List::length(){
    Node *tmp = head;
    int result = 1;
    while (tmp!= nullptr){
        result += 1;
        tmp = tmp->getNext();
    }
    return result;
}

void List::insert(int loc, std::string data){
    Node *walker, *trailer;
    walker = head;
    trailer = nullptr;

    Node *toInsert = new Node(data);
    while(loc>0 && walker != nullptr){
        loc--;

        trailer = walker;
        walker = walker -> getNext();
    }

    if (loc > 0){
        throw std::out_of_range("Our insert is out of range");
    }

    if(trailer == nullptr){
        head = toInsert;
    }
    else{
        toInsert->setNext(walker);
        trailer->setNext(toInsert);
    }



}

std::string List::get(int loc){
    Node *tmp = head;
    for(int i = 0; i < loc; i++){
        tmp = tmp->getNext();
    }
    return tmp->getData();
}

bool List::contains(std::string item){
    Node *tmp = head;
    while (tmp!= nullptr){
        if (tmp->getData() == item) return true;
        tmp = tmp->getNext();
    }
    return false;

}

void List::remove(int loc){
    Node *walker, *trailer;
    walker = head;
    trailer = nullptr;
    while(loc>0 && walker != nullptr){
        loc--;

        trailer = walker;
        walker = walker -> getNext();
    }

    if (loc > 0){
        throw std::out_of_range("Our insert is out of range");
    }
    trailer->setNext(walker->getNext());
    delete(walker);
}