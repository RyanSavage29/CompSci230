#include <iostream>
using namespace std;

void Mystery( int & a, int & b, int c )
{
     a = b + c;
     b = 0;
     c = 0;
}

int main()
{
     int x = 0, y = 1, z = 2;

     Mystery(x, y, z);
     cout << x << " " << y << " " << z;
     Mystery(x, y, z);
     cout << x << " " << y << " " << z << endl;
     
     return 1;
}


