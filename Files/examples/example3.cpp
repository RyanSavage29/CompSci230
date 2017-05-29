#include <iostream>

using namespace std;
int main(){
    string str = "c plus plus";
   
    try{
        char ch1 = str[100];
        cout<<ch1<<endl;
    }catch(exception e){
        cout<<"[1]out of bound!"<<endl;
    }
    try{
        char ch2 = str.at(100);
        cout<<ch2<<endl;
    }catch(exception e){
        cout<<"[2]out of bound!"<<endl;
    }
    return 0;
}
