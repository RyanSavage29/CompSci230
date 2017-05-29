 #include <iostream>
 #include <exception>
#include <stdexcept>
using namespace std;
double d (double a, double b)
{
	return a/b;
	
	}
int main()
{
	double a, b, c;

	// Request two numbers from the user
	cout << "Please provide two numbers\n";
	cout << "First Number: ";
	cin >> a;
	cout << "Second Number: ";
	cin >> b;
	
	c = d (a, b);
	
	cout << c << endl;
    
}
