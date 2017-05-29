#include <iostream>
#include <string>
#include <fstream>
using namespace std;


struct Node
{
  string ssn;
  string firstName;
  string lastName;	
  Node* next;
  
};

void append(Node*& head, string ssn, string first, string last){
  Node * newPtr = new Node;
  newPtr->ssn = ssn;
  newPtr->firstName = first;
  newPtr->lastName = last;
  
    Node* temp = head;
    
    // in this example, the linked list is not empty.
    // in your lab, you should check whether it is empty or not.
    
    while(temp->next != NULL){
      temp = temp->next;
    }
    temp->next = newPtr;
  }


int main(int argc, char* argv[])
{  
   
   // creat a head
   Node* head = NULL;
// construct the first node   	   	
   Node* firstnode = new Node;
   firstnode->next = NULL; 
   firstnode->ssn = "123";
   firstnode->firstName = "student1_first";
   firstnode->lastName = "student1_last";
// link head and the first node   
   head = firstnode;
 
 // reading the input  
   string current_ssn = "current_reading_ssn";
   string current_firstName = "current_reading_first";
   string current_lastName = "current_reading_last";
   
   append(head, current_ssn, current_firstName, current_lastName);
   
   Node* temp = head;

   while(true)
   {
	   cout <<"SSN = "<<temp->ssn<<endl;
	   temp = temp->next;
	   
	   if(temp->next == NULL)
	   {
	    cout <<"SSN = "<<temp->ssn<<endl;
	    break;   
	   }
	   }

	return 0;

}
