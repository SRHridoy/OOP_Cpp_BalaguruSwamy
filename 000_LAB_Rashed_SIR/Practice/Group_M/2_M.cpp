/*
    Write a program implementing linked list as a class . Also Perform some required operations like inserting deleting nodes & display the contents of entire linked list...
*/
#include<iostream>
using namespace std;

class Node
{
    public:
        int data;
        Node* next;

        Node(int d):data(d),next(NULL){}
};

void insertAtHead(Node* &head, int d)
{
    Node* new_node = new Node(d);
    new_node->next = head;
    head = new_node;
}

void insertAtEnd(Node* &head, int d)
{
    Node* new_node = new Node(d);
    Node* temp = head;
    while (temp->next!=NULL)
    {
        temp = temp->next;
    }
    temp->next = new_node;
}

void insertAtPos(Node* &head, int d, int pos)
{
    if(pos==0)
    {
        insertAtHead(head, d);
        return;
    }
    Node* new_node = new Node(d);
    Node* temp = head;  
    int curr_pos = 0;
    while (curr_pos!=pos-1)
    {
        temp = temp->next;
        curr_pos++;
    }
    new_node->next = temp->next;
    temp->next = new_node;
}

void deleteAtHead(Node* &head)
{
    Node* temp = head;
    head = head->next;
    delete temp;
}

void deleteAtEnd(Node* &head)
{
    if(head == NULL)
    {
        cout << "There is no element in the linkedlist" << endl;
        return;
    }
    if(head->next==NULL)
    {
        delete head;
        head = NULL;
        return;
    }
    Node* temp = head;
    while (temp->next->next!=NULL)
    {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = NULL;
}

void deleteAtPos(Node* &head, int pos)
{
    if(head==NULL)
    {
        cout << "The linkedlist is empty!" << endl;
    }
    if(head == 0)
    {
        deleteAtHead(head);
    }
    Node* prev = NULL;
    Node* curr = head;
    int curr_pos = 0;

    while (curr_pos<pos and curr!=NULL)
    {
        prev = curr;
        curr = curr->next;
        curr_pos++;
    }
    if(curr==NULL)
    {
        cout << "Invalid!" << endl;
    }
    prev->next = curr->next;
    delete curr;
    

}

void display(Node* head)
{
    Node* temp = head;
    while (temp!=NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }cout << "NULL" << endl;
    
}


int main()
{
    Node* head = NULL;
    display(head);
    
    insertAtHead(head, 2);
    insertAtHead(head, 1);
    display(head);

    insertAtEnd(head, 3);
    insertAtEnd(head, 5);
    insertAtEnd(head, 6);
    display(head);
    
    insertAtPos(head, 4, 3);
    display(head);
    insertAtPos(head, 10, 5);
    display(head);
    insertAtPos(head, 7, 7);
    display(head);


    deleteAtHead(head);
    display(head);

    deleteAtEnd(head);
    display(head);

    deleteAtPos(head, 4);
    display(head);

}