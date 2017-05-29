#include <iostream>
#include <vector>
#include <sstream> 
#include <string>
#include <cstdlib>
#include <cstring>

using namespace std;

class TCNJ_Student
{
	public:
		char	name;
		int		id;
	};


int main (int argc, char *argv[]) 

{
	// method 1
	TCNJ_Student s1;
	
	// method 2
	TCNJ_Student *s2 = new TCNJ_Student();
	
	s1.name = 't';
	s1.id = 123;
	
	s2->name = 'c';
	s2->id = 456;
    
    
    cout << s1.name << " " << s1.id << endl;
    
    cout << s2->name << " " << s2->id << endl;
    
    delete s2;
    
    return 1;
	}
