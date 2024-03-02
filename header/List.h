#pragma once
#include "Node.h"

// список хранящий узлы
class List{
public:
    List() : m_head(nullptr) {};
    void push_back(int data); // вставка значения в конец списка
    void push_front(int data); // вставка значения вперед списка
    void insert(int pos, int data); // вставка значения по позиции
    void show(); // вывод списка
    void deleteNodeData(int data); // удаление узла по значению
    void deleteNodePos(int pos); // удаление узла по позиции
    void clear(); // очистка списка
    bool find(int data); // поиск значения в списке
private:
    Node* m_head;
};
