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

    ~Node()
    {
        int value = this -> data;
        if(this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
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

void deletenode(int position, Node* &head)
{
    if(position==1)
    {
        Node* temp = head;
        head = head -> next;
        temp -> next = NULL;
        delete temp;
    }
    else {
        int cnt = 1;
        Node* curr = head;
        Node* prev = NULL;

        while(cnt < position)
        {
            prev = curr;
            curr = curr -> next;
            cnt++;
        }

        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;
    }
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

    Node* head = node1;
    Node* tail = node1;

    InsertAtTail(tail,12);
    InsertAtTail(tail,15);
    InsertAtHead(head, 13);
    InsertAtPosition(tail, head, 5, 11);
    deletenode(2,head);
    printLinkedList(head);

    return 0;
}