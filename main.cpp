#include <iostream>
#include "List.cpp"
using namespace std;

int main()
{
    Node* node_0 = new Node(10);
    Node* node_1 = new Node(11);
    Node* node_2 = new Node(12);
    Node* node_3 = new Node(13);

    List list;
    list.push_back(node_0 -> m_data);
    list.push_back(node_1 -> m_data);
    list.push_back(node_2 -> m_data);
    list.push_back(node_3 -> m_data);

    list.show();
    cout << "-------DELETE--------" << endl;
    list.deleteNodePos(1);
    list.show();



    delete node_0;
    delete node_1;
    delete node_2;
    delete node_3;

    return 0;
}