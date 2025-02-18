#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Node
{
public:
    int value;
    Node *next;
    Node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};
class LinkedList
{
public:
    Node *head;
    Node *tail;
    int size;
    LinkedList()
    {
        head = tail = NULL;
        size = 0;
    }
    void insertAtHead(int val)
    {
        Node *temp = new Node(val);
        if (size == 0)
        {
            head = tail = temp;
            size++;
        }
        else
        {
            temp->next = head;
            head = temp;
            size++;
        }
    }
    void insertAtTail(int val)
    {
        Node *temp = new Node(val);
        if (size == 0)
        {
            head = tail = temp;
            size++;
        }
        else
        {
            tail->next = temp;
            tail = temp;
            size++;
        }
    }
    void valueAtIdx(int idx)
    {
        int count = 1;
        if (size < count)
        {
            cout << "element  LL" << endl;
            return;
        }
        else if (idx > size)
        {
            cout << "index out of range , Invalid Index!!" << endl;
            return;
        }

        Node *temp = head;
        while (count < idx)
        {
            count++;
            temp = temp->next;
        }
        cout << "value at " << idx << " index is : " << temp->value << endl;
    }
    void display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->value << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};
int main()
{
    LinkedList ll;
    cout << "size-->" << ll.size << endl;
    ll.insertAtHead(5);
    ll.display();
    cout << "size-->" << ll.size << endl;
    ll.insertAtHead(1);
    ll.display();
    cout << "size-->" << ll.size << endl;
    ll.insertAtTail(10);
    ll.display();
    cout << "size-->" << ll.size << endl;
    ll.insertAtTail(100);
    ll.display();
    cout << "size-->" << ll.size << endl;
    ll.valueAtIdx(3);
}