#include <iostream>
using namespace std;

typedef struct IntElement{
    struct IntElement *next;
    int data;

} IntElement;

bool insertInFront (IntElement **head, int data){

    IntElement newElem;
    newElem.data = data;
    newElem.next = *head;
    *head = &newElem;
    return true;    

}

int main (void){

    IntElement *head;
    insertInFront ( &head, 10);
    cout << head->data<<endl;
    insertInFront ( &head, 20);
    cout << head->data<<endl;
    insertInFront ( &head, 30);
    cout << head->data<<endl;
    cout << head->data<<endl;
    insertInFront ( &head, 40);
    cout << head->data<<endl;
    cout << head->data<<endl;
    return 0;
}

