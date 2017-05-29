#include <iostream>
using namespace std;
class MyClass
{
private:
    int counter;
public:

    MyClass() : counter(0) {}

    void Foo()
    {
        counter++;
        std::cout << "Foo" << std::endl;    
    }

    void Foo() const
    {
        counter++;
        std::cout << "Foo const" << std::endl;
    }

    int GetInvocations() const
    {
        return counter;
    }
};
int main(void)
{
    MyClass cc;
    const MyClass &ccc = cc;
    cc.Foo();
    ccc.Foo();
  //  std::cout << "The MyClass instance has been invoked " << ccc.GetInvocations() << " times" << endl;
}
