/*Autor: Md.Sohanur Rahman Hridoy
----------------------------------
Implementation of linkedlist........
*/
#include <iostream>
#include <fstream>
#include <stdexcept>
using namespace std;

class Node
{

public:
    int data;
    Node *next;
    Node(int d) : data(d), next(NULL){};
};
//Insert at head : 
void insertAtHead(Node* &head, int d)
{
    Node *new_node = new Node(d);
    new_node->next = head;
    head = new_node;
}

//Insertion at end : 
void insertAtEnd(Node* &head, int d)
{
    Node* new_node = new Node(d);
    Node *temp = head;
    while (temp->next!=NULL)
    {
        temp = temp->next;
    }
    temp->next = new_node;
}

//Insertion at any Position : 
void insertAtPos(Node* &head, int d, int pos)
{
    if(pos==0)
    {
        insertAtHead(head, d);
        return;
    }
    Node* new_node = new Node(d);
    Node *pos_1 = head;
    int curr_pos = 0;
    while (curr_pos!=pos-1)
    {
        pos_1 = pos_1->next;
        curr_pos++;
    }
    new_node->next = pos_1->next;
    pos_1->next = new_node;
}

//Delete from head node : 
void deleteFromHead(Node* &head)
{
    Node* temp = head;
    head = temp->next;
    free(temp);
}

//Delete from end : 
void deleteFromTail(Node* &head)
{
    Node* temp = head;
    while (temp->next->next!=NULL)
    {
        temp = temp->next;
    }
    temp->next = NULL;
}

//Delete from any place:
void deleteFromPos(Node* &head, int pos)
{
    if(head == NULL)
    {
        throw runtime_error("The LinkedList is Empty");
    }
    if(pos == 0)
    {
        deleteFromHead(head);
        return;
    }
    
    Node *prev = NULL;
    Node *curr = head;
    int curr_pos = 0;
    while (curr!=NULL && curr_pos < pos)
    {
        prev = curr;
        curr = curr->next;
        curr_pos++;
    }
    if(curr == NULL)
    {
        throw runtime_error("Position is out of range!");
    }

    prev->next = curr->next;
    free(curr);

}

// Traversing and Displaying :
void display(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main()
{

    Node *head = NULL;
    display(head);
    //Exception Handling :
    try
    {
        ifstream inputFile("LinkedList_Input.txt");
        if (!inputFile.is_open())
        {
            throw runtime_error("Error Reading files !");
        }
        int d1, d2, d3, d4, d5, d6, d7;
        inputFile >> d1 >> d2 >> d3 >> d4 >> d5 >> d6 >> d7;
//Inserting at Head : 
        insertAtHead(head,d1);
        display(head);
        insertAtHead(head,d2);
        display(head);
        insertAtHead(head,d3);
        display(head);
        insertAtHead(head,d4);
        display(head);
        insertAtHead(head,d5);
        display(head);
        insertAtHead(head,d6);
        display(head);
        insertAtHead(head,d7);
        display(head);

        int d8,d9;
        inputFile >> d8 >> d9;
//Inserting at End :
        insertAtEnd(head,d8);
        display(head);
        insertAtEnd(head, d9);
        display(head);

        int d10,pos1, d11,pos2;
        inputFile >> d10 >> pos1 >> d11 >> pos2;
//Inserting at Pos : 
        insertAtPos(head,d10,pos1);
        display(head);
        insertAtPos(head, d11,pos2);
        display(head);

//Delete Head Node : 
        deleteFromHead(head);
        display(head);

//Delete From Head : 
        deleteFromTail(head);
        display(head);

    int pos3;
    inputFile >> pos3;
//Delete from any pos:
        deleteFromPos(head,pos3);
        display(head);
    
    inputFile.close();
    }
    catch (const exception &e)
    {
        cerr << "Error : " << e.what() << endl;
    }

    try
    {
        ofstream outputFile("LinkedList_Output.txt");
        if(!outputFile.is_open())
        {
            throw runtime_error("Error Writing on files!");
        }

        //Write the final output to the output file : 
        Node *temp = head;
        outputFile << "The final Output is : " << endl << endl;
        while (temp!=NULL)
        {
            outputFile << temp->data << "->";
            temp = temp->next;
        }outputFile << "NULL";
        
        outputFile.close(); 

    }
    catch(const exception &e)
    {
        cerr << "Error : " <<  e.what() << '\n';
    }
    
}