#include "Queue.h"

void Queue::enQueue(int x)
{
	Node* temp = new Node(x); 

	if (m_rear == nullptr)
	{
		m_front = m_rear = temp;
		return;
	}

	m_rear->m_next = temp;
	m_rear = temp;
}

void Queue::deQueue()
{
	if(m_front == nullptr)
	{
		return;
	}
}

int Queue::Peek()
{
	if (m_front == nullptr)
		return 0;
	return m_front->m_data;
}