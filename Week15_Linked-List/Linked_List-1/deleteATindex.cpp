#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

class Node
{ // user defined datatypes;
public:
    int val;
    Node *next; // next is a pointer of Node datatypes
    // constructor
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

class LinkedList
{ // user defined data Structure
public:
    Node *head;
    Node *tail;
    int size;
    LinkedList()
    { // constructor
        head = tail = NULL;
        size = 0;
    }

    void insertAtEnd(int val)
    {
        Node *temp = new Node(val);
        if (size == 0)
            head = tail = temp;
        else
        {
            tail->next = temp;
            tail = temp;
        }
        size++;
    }

    void insertAtHead(int val)
    {
        Node *temp = new Node(val); // new node creation
        if (size == 0)
            head = tail = temp;
        else
        {
            temp->next = head;
            head = temp;
        }
        size++;
    }
    // node will insert between the linked list
    void deleteAtHead(){
        if( size ==0)
        {
        cout<<"list is empty";
        return;
        } 
         head = head->next;
         size--;

    }
    void deleteAttail(){
        if( size ==0){
            cout<<"list is empty !";
            return ;
        }
        Node* temp = head;
        while( temp->next != tail){
            temp = temp->next;
        }
        temp->next = NULL;
        tail = temp;
        size --;
    }
    void deleteAtIndex( int idx){
         if( idx <0 || idx>=size){
            cout<<"Invalid index";
         }
         else if ( idx == 0) return  deleteAtHead();
         else if ( idx == size-1)  return deleteAttail();
         else{
            Node* temp= head;
            for( int i=1; i<idx-1; i++){
                temp = temp->next;
            }
            temp->next = temp->next->next;
            size--;
         }
    }
    void display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main()
{
    LinkedList ll;
    ll.insertAtEnd(10);
    ll.display();
    ll.insertAtEnd(20);
    ll.display();
    ll.insertAtEnd(30);
    ll.display();
    ll.insertAtEnd(50);
    ll.insertAtEnd(80);
    ll.display();
    ll.insertAtHead(05);
    ll.display();
    ll.deleteAtHead();
    ll.display();
    ll.deleteAttail();
    ll.display();
    ll.deleteAtIndex(2);
    ll.display();

}