#include <iostream>
using namespace std;
class ExceptionClass{
       const char* name;
public:
ExceptionClass(const char* name) 
{
             cout<<"Construct "<<name<<endl;
             this->name = name;
       }
~ExceptionClass()
{
             cout<<"Destruct "<<name<<endl;
}
void mythrow()
{
       throw ExceptionClass("my throw");
}
};
int main(){
       ExceptionClass e("Test");
       try{
           e.mythrow();
     } 
     catch(...)
    {
         cout<<"*********"<<endl;
       }
       
       return 0;
}
