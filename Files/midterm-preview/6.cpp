#include <iostream>
using namespace std;

class A{
public:
    virtual void foo(){
        cout << "foo A" << endl;
    }
    virtual void bar(){
        cout << "bar A" << endl;
    }
};

class B:public A{
public:
    void foo(){
        cout << "From B" << endl;
    }
    void bar(){
        cout << "bar B" << endl;
    }
    
};

int main(){
    A* p;
    B obj;
    p = &obj;
    p->foo();
    p->bar();
}
