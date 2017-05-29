#include <iostream>
using namespace std;

int main()
{
	double a, b, c;

	// Request two numbers from the user
	cout << "Please provide two numbers\n";
	cout << "First Number: ";
	cin >> a;
	cout << "Second Number: ";
	cin >> b;

	c = a / b;

	cout << "\n" << a << " / " << b << " = " << c << "\n\n";
	return 0;
}
