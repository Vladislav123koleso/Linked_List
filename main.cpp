#include <iostream>
#include "cpp/List.cpp"
#include "cpp/BinarySearch.cpp"

using namespace std;

int main()
{
    Node* node_0 = new Node(10);
    Node* node_1 = new Node(11);
    Node* node_2 = new Node(12);
    Node* node_3 = new Node(14);

    List list;
    list.push_back(node_0 -> m_data);
    list.push_back(node_1 -> m_data);
    list.push_back(node_2 -> m_data);
    list.push_back(node_3 -> m_data);

    int arr[] = {0,1,2,3,4};
    cout << BinarySearch(arr, 0,4,3) << endl;


    /*
    list.show();
    cout << "-------DELETE--------" << endl;
    cout << list.find(10) << endl;
    list.clear();
    list.show();
    */
    

    return 0;
}