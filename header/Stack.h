#pragma once
#include <iostream>

using namespace std;

#define MAX 1000

class Stack
{
private:
    int m_top;
public:
    int m_items[MAX];
    Stack() : m_top(-1) {}
    // операция добавления элемента на вершину стека
    bool push(int x);
    // операция удаления элемента с вершины стека
    int pop();
    // операция просмотра элемента с вершины стека без его удаления
    int peek();
    // утилитарная функция, которая показывает заполнен ли стек
    bool isFull();
    // операция проверки существования элементов в стеке
    bool isEmpty();
};