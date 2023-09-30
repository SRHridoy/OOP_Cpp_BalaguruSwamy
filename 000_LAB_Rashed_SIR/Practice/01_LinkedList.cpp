#include<iostream>
using namespace std;

class Node
{
    public:
        int val;
        Node* next;

        Node(int data)
        {
            val = data;
            next = NULL;
        }
};

void insertAtHead(Node* &head,int val){
    
    Node *new_node = new Node(val);
    new_node->next = head;
    head = new_node;
}

void insertAtTail(Node* &head, int val){

    Node* new_node = new Node(val);

    Node* temp = head;
    while (temp->next!=NULL)
    {
        temp = temp->next;
    }
    //temp has reached last node...
    temp->next = new_node;
}

void insertAtPosition(Node* &head, int val, int pos){

    if(pos==0)
    {
        insertAtHead(head, val);
        return;
    }

    Node* new_node = new Node(val);
    Node* temp = head;
    int current_pos = 0;
    while (current_pos!=pos-1)
    {
        temp=temp->next;
        current_pos++;
    }
    
    //temp is pointing to node at pos-1
    new_node->next = temp->next;
    temp->next = new_node;
}

void updateAtPosition(Node* &head, int k, int val){
    
    Node* temp = head;
    int curr_pos = 0;
    while(curr_pos!=k){
        temp = temp->next;
        curr_pos++;
    }
    //temp will be pointing to kth node;
    temp->val = val;
}

void deleteAtHead(Node* &head)
{
    Node* temp = head;
    head = head->next;
    free(temp);
}

void deleteAtTail(Node* &head){

    Node* second_last = head;
    while (second_last->next->next!=NULL)
    {
        second_last=second_last->next;
    }
    //Mow second_last points to second last node
    Node* temp = second_last->next;
    second_last->next=NULL;
    free(temp);
}

void display(Node* head){

    Node* temp = head;
    while (temp!=NULL){
        cout << temp->val<< "->";
        temp = temp->next;
    }
    cout << "NULL"<< endl;
}

int main()
{
    Node* head = NULL;
    insertAtHead(head,2);
    display(head);
    insertAtHead(head,1);
    display(head);
    insertAtTail(head, 3);
    display(head);
    insertAtPosition(head,4,1);
    display(head);
    updateAtPosition(head,2,5);
    display(head);

    deleteAtHead(head);
    display(head);

    deleteAtTail(head);
    display(head);
}