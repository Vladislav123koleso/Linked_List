#pragma once
// класс узел который хранит данные узла и указатель на следующий
class Node
{
public:
    Node(int data) : m_data(data), m_next(nullptr) {}
    int m_data;
    Node* m_next;

};
