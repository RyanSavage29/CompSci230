#include <iostream>
#include <cstring>
using namespace std;

bool foo(char* p){
  int i = strlen(p);
  char * r = p + i-1;
  while(p < r ){
    if(*p==*r){
      p++;
      r--;
    }
    else
      return false;
  }
  return true;
}

int main(){
  char arr[] = "tcnjnct";

  cout << foo(arr) << endl;
}
