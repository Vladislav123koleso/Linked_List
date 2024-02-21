#pragma once
#include "Node.h"

// список хранящий узлы
class List{
public:
    List() : m_head(nullptr) {};
    void push_back(int data);
    void push_front(int data);
    void insert(int pos, int data);
    void show();
private:
    Node* m_head;
};
