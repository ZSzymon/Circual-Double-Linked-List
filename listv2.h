#ifndef LISTV2_H
#define LISTV2_H
#include <iostream>
class Node
{
public:
    std::string data;
    Node *next;
    Node *prev;
    Node(std::string data):data(data)
    {
        next=nullptr;
        prev=nullptr;
    }

};


class ListV2
{
    public:
    Node *head, *tail;
    size_t size;

    ListV2();
    ~ListV2();
    bool isEmpty();
    void pushFront(std::string data);
    void pushBack(std::string data);
    void printList();


};


#endif // LISTV2_H
