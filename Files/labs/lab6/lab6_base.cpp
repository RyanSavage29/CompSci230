#include <iostream>
#include <cstdlib>

using namespace std;

int A[10];

void com(int len, int size){
  if (len <1){
    for(int i=0; i< size; i++)
        cout << A[i];
    cout <<endl;
  }
  else {
    for(int i=0; i<=9; i++){
      A[len-1]=i;
      com(len-1, size);
    }
  }
}

int main(int argc, char* argv[]){

  com(atoi(argv[1]), atoi(argv[2]));
}


