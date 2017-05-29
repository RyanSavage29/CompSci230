#include <iostream>
#include <vector>
#include <sstream> 
#include <string>
#include <cstdlib>
#include <cstring>

using namespace std;

int main (int argc, char *argv[]) 

{
    cout << "Total argument = "<< argc << endl;
    
    for (int i=0; i< argc; i++)
         cout << argv[i] << endl;
    
    
    return 1;
	}
