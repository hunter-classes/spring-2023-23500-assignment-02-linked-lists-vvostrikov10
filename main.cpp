#include <iostream>
#include "Node.h"
#include "List.h"
#include "IntNode.h"
#include "OList.h"

int main(){
    Node *n1;
    Node *n2;
    n1 = new Node();
    n2 = new Node();
    n1->setData("Hello");
    n2->setData("World");
    n1->setNext(n2);
    Node *n3;
    n3 = new Node();
    n3->setData("middle");
    n3->setNext(n2);
    n1->setNext(n3);
    n3 = new Node();
    n3->setData("!");
    n2->setNext(n3);

    Node *tmp = n1;
    while(tmp != nullptr){
        std::cout << tmp->getData() << "\n";
        tmp = tmp->getNext();
    }
    List *l = new List();
    l->insert("1");
    l->insert("2");
    l->insert(1,"3");
    l->remove(1);
    std::cout << l->toString() << "\n";

    OList *ol = new OList();
    OList *test = new OList();
    test->insert(4);
    test->insert(2);
    test->insert(3);
    test->insert(5);
    std::cout << "\n";
    std::cout << test->contains(3) << "\n";
    std::cout << ol->toString() << "\n";
    ol->reverse();
    OList *ol2 = new OList();
    ol2->insert()
    std::cout << ol->toString() << "\n";
    delete(ol);
}