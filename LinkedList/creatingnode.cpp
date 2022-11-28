#include <iostream>
#include <array>
#include <vector>

using namespace std;

class Node{
    public:
    int data;
    Node* next;

    // constructor
    Node(int data) {
        this -> data = data;
        this -> next = NULL;
    }
};

void InsertAtHead(Node* &head, int d)
{   
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

void InsertAtTail(Node* &tail, int d)
{
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp;
}

void InsertAtPosition(Node* &tail, Node* &head, int position, int d)
{
    if(position==1)
    {
        InsertAtHead(head, d);
        return;
    }

    Node* temp = head;
    int cnt = 1;

    while(cnt < position-1)
    {
        temp = temp -> next;
        cnt++;
    }

    if(temp -> next == NULL)
    {
        InsertAtTail(tail, d);
        return;
    }

    Node* newnode = new Node(d);

    newnode -> next = temp -> next;
    temp -> next = newnode;
    
}

void printLinkedList(Node* &head)
{ 
    Node* temp = head;

    while(temp!= NULL)
    {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

int main()
{
    Node* node1 = new Node(10);
    // cout << node1 -> data <<endl;

    Node* head = node1;
    Node* tail = node1;

    InsertAtTail(tail,12);
    InsertAtTail(tail,15);
    InsertAtHead(head, 13);
    InsertAtPosition(tail, head, 5, 11);
    printLinkedList(head);

    return 0;
}