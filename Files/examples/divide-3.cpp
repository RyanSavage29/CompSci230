#include <iostream>
using namespace std;

double division(int x, int y)
{
  if( y == 0 )
    {
      throw 1;
    }
  return (x/y);
}


int main ()
{
  int m = 230;
  int n = 0;
  double r = 0;
 
  try {
    r = division(m, n);
    cout << r << endl;
  }catch (int msg) {
    cerr << msg << endl;
  }

  return 0;
}
