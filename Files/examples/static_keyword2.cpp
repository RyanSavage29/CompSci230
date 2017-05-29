# include <iostream>
using namespace std;
class Testing
{
public:
	int m_value = 1;
};
int main()
{
	Testing first;
	Testing second;
    second.m_value = 2;
    cout << first.m_value << '\n';
    std::cout << second.m_value << '\n';
    return 0;
}
