#include <iostream>
#include <cstdlib>
using namespace std;

void myth(int n){
  if(n>0){
    myth(n-1);
    for(int i =0; i< n; i++){
      cout << "#";
    }
    cout << endl;
  }
}

int main(int argc, char* argv[]){
  myth(atoi(argv[1]));
}

//./a.out 5
