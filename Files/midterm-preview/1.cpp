#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

void myth(int x){
  for(int f=2; f<=x; f++){
    if(x%f == 0){
      cout << f << endl;
      myth(x/f);
      return;
    }
  }
}

int main(int argc, char* argv[]){
  int n = atoi(argv[1]);
  myth(n);
}


// what is the output of ./a.out 63 
