#pragma once
#include "Node.h"

// јлгоритм сортировки - ќчередь
class Queue
{
private:
    Node* m_front; //узел начала очередив
    Node* m_rear; // узел конца очереди
public:
    Queue() : m_front(nullptr), m_rear(nullptr)
    {
    }

    void enQueue(int x); // добавить элемент в конец очереди.
    void deQueue(); // удалить элемент из начала очереди.
    bool IsEmpty(); // проверка, пуста ли очередь.
    int Peek(); // получить значение передней части очереди(первого в очереди), не удал€€ ее.

};
