#include "../header/List.h"
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

// удаление узла по даным узла
void List :: deleteNodeData(int data)
{
    Node* temp = m_head;
    Node* prev = nullptr;

    // случай удаления начала списка
    if(temp && temp -> m_data == data){
        m_head = temp -> m_next;
        delete temp;
        return;
    }
    // идем по списку, пока не найдем узел со значением данных, равных ключу
    while(temp && temp -> m_data != data)
    {
        prev = temp;
        temp = temp -> m_next;
    }
    // если узел не найден, возвращаем
    if(!temp)
    {
        return;
    }
    // меняем указатель следующего узла для предыдущего узла на узел, следующий за удаляемым узлом, и удаляем узел с данными
    prev -> m_next = temp -> m_next;
    delete temp;

}
// удаление узла по позиции в списке
void List :: deleteNodePos(int pos)
{
    Node* temp = m_head;
    Node* prev = nullptr;

    // случай удаления начала списка
    if(temp && pos == 0){
        m_head = temp -> m_next;
        delete temp;
        return;
    }

    int currPos = 0;
    while(temp != 0)
    {
        if(currPos == pos)
        {
            prev->m_next = temp->m_next;
            delete temp;
            return;
        }
        prev = temp;
        temp = temp -> m_next;
        currPos++;
    }
    
}
// полная очистка списка
void List :: clear()
{
    Node* temp = m_head;

    while(temp != 0)
    {
        m_head = temp -> m_next;
        delete temp;
        temp = m_head;
    }
}

bool List::find(int data)
{
    Node* current = m_head;
    while (current != nullptr)
    {
        if (current->m_data == data) {
            return 1;
        }
        current = current -> m_next;
    }
    return 0;
}