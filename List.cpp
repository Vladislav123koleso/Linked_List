#include "List.h"
#include <iostream>

void List :: push_back(int data)
{
    // создаем новый узел
    Node* node = new Node(data);
    // если список пуст, возвращаем узел
    if (m_head == nullptr)
    {
        m_head = node;
        return;
    }
    // в цикле ищем последний элемент списка
    Node* last = m_head;
    while (last ->  m_next != nullptr)
    {
        last = last -> m_next;
    }
    // Обновляем указатель next последнего узла на указатель на новый узел
    last -> m_next = node;
    return;
}


// вставка узла вперед
void List :: push_front(int data)
{
    Node* node = new Node(data);
    node -> m_next = m_head;
    m_head = node;
}

// вставка в середине
void List :: insert(int pos, int data)
{
    // создаем новый узел
    Node* newNode = new Node(data);
    // если список пуст, узел будет началом списка
    if(m_head == nullptr)
    {
        m_head = newNode;
        return;
    }
    //вставка в начало списка
    if(pos == 0)
    {
        newNode -> m_next = m_head;
        m_head = newNode;
        return;
    }
    int currPos = 0;
    Node* current = m_head;
    // в цикле идем по списку, пока список не кончится, или пока не дойдем до позиции
    while (currPos < pos -1 && current -> m_next != nullptr)
    {
        current = current -> m_next;
        currPos++;
    }
    // меняем указатель на следующий узел на указатель на новый узел
    Node* next = current -> m_next;
    current -> m_next = newNode;
    // связываем список обратно, меняем указатель на узел, следующий после нового узла, на указатель на узел, следующий за current
    newNode -> m_next = next;
}

void List :: show()
{
    Node* last = m_head;
    while (last != nullptr)
    {
        std::cout << last -> m_data << std::endl;
        last = last -> m_next;
    }

}