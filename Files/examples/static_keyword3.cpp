# include <iostream>
using namespace std;
class Something
{
public:
    static int s_value;
};
int main()
{
    Something first;
    Something second;
    second.s_value = 2;
    cout << first.s_value << '\n';
    cout << second.s_value << '\n';
    return 0;
}

