#include <iostream>
using namespace std;

void f(int *p) {
    *p = 5;
    p = NULL;
}

int main() {
    int x=2;
    int *q = &x;
    
    f(q);
    
    cout<< *q << endl;

}
