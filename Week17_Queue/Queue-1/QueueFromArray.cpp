#include<iostream>
using namespace std;

// now we will make our own queue using class and object
class Queue{
    public :
// constructor
 int f;
 int b;
 int arr[5];
 Queue(int size){
   f = 0;
   b = 0;
 }
 
 void push(int val){
    if( b ==5){
        cout<<"queue is full"<<endl;
    }
    arr[b] = val;
    b++;
 }

 void pop(){
   if(f-b ==5 ){
    cout<<"queue is empty";
    return;

   }
   f++;
 }

 int size(){
    return f-b;
 }

 int front(){
    if( b ==5) return -1;
    return arr[f];
 }

 int back(){
    if( f-b==5) return -1 ;
    return arr[b-1];
 }

 bool empty(){
    if ( f-b== 0) return true;
    else return false;
 }

 void display(){
    for( int i=f; i<b; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
 }

};

int main (){
Queue q(5);
q.push(10);
q.push(20);
q.push(30);
q.push(40);
q.display();
q.pop();
q.display();
q.push(60);
q.display();


}