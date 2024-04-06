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
    void insertAtIndx(int idx, int val) {
        // Node *temp = new Node(val); // new node creation
        if (idx < 0 || idx > size) cout << "Invalid index" << endl;
        else if (idx == 0) insertAtHead(val);
        else if (idx == size) insertAtEnd(val);
        else{
            Node *t = new Node(val);
            Node *temp = head;
            for (int i=1; i<=idx - 1; i++){
                temp = temp->next; // traversal of temp on Likedlist
            }
            t->next = temp->next; // t is added to temp's next node
            temp->next = t; // temp is added to t
            size++;
        }
    }
    // get element at any index from linked list
    int getAtIndex(int idx){
        if( idx<0 || idx>size){
            cout<<"Invalid Index";
            return -1;
        }
        else if ( idx ==0) return head->val;
        else if (idx == size-1) return tail->val;
        else{
              Node* temp = head;
              for( int i=1; i<idx; i++){
                 temp = temp->next;
              }
              return temp->val;
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
    ll.insertAtIndx(2, 15);
    ll.display();
    cout<<ll.getAtIndex(3)<<endl;
}