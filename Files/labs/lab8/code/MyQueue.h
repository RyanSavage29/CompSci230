#include <iostream>
#include <stack>
using namespace std;

template <class T>
class MyQueue {
    // these two stck are instance variables
    // by default, the access is private
    stack<T> first;
    stack<T> second;
    
    public:

    // return the value of the oldest member
    T front(){
      // please implement this method
    }

    // add value val to MyQueue
    void push(T val){
      // please implement this method        
    }


    // remove the oldest member from MyQueue
    void pop(){
      // please implement this method
    }
};
