#include<iostream>
using namespace std;
 
class A
{
public:
  A()  { cout << "A's constructor called" << endl; }
  void printA() { cout << "It's A here"<<endl;}
};
 
class B
{
public:
  B()  { cout << "B's constructor called" << endl; }  
  void printB() { cout << "It's B here"<<endl;}

};
 
class C: public B, public A  // Note the order
{
  public:
  C()  { cout << "C's constructor called" << endl; }
  void printC() { cout << "It's C here"<<endl;}

};
 
int main()
{
    C c;
    c.printC();    
    c.printB();
    c.printA();
    return 0;
}
