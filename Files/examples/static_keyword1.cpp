# include <iostream>
using namespace std;
int generateID_static()
{   static int s_id = 0;
    return ++s_id;}
int generateID_auto()
{   int auto_id = 0;
    return ++auto_id;}
int main()
{
    cout << generateID_static() << '\n';
    cout << generateID_static() << '\n';
    cout << generateID_static() << '\n';
    cout << generateID_auto() << '\n';
    cout << generateID_auto() << '\n';
    cout << generateID_auto() << '\n';
    return 0;}

