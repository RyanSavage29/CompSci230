#include <iostream>
#include <exception>
#include <stdexcept>
using namespace std;
class myType: public out_of_range{
public:
    myType(const string& what_arg): out_of_range(what_arg){}
};



int main(){
    string str = "c plus plus";
    try{
        char ch1 = str.at(100);    // throws out_of_range
        cout<<ch1<<endl;
    }catch(myType){
        cout<<"Error: myType!"<<endl;
    }catch(out_of_range){
        cout<<"Error: out_of_range!"<<endl;
    }catch(exception){
        cout<<"Error: exception!"<<endl;
    }
    return 0;
}
