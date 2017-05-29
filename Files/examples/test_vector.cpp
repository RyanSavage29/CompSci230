#include <iostream>
#include <vector>
#include <sstream> 
#include <string>
#include <cstdlib>
#include <cstring>

using namespace std;


int main (int argc, char *argv[]) 

{
	
	typedef vector<vector<int> > ARRAY; 
	ARRAY array2;
	vector<int> rowvector_1(2), rowvector_2;
	
	int x, y;
	
	x = atoi(argv[1]);
    y = atoi(argv[2]);
    
    rowvector_1[0] = x;
    rowvector_1[1] = y;
    
    rowvector_2.push_back(x);
    rowvector_2.push_back(x);
    rowvector_2.push_back(x);

    
        
	array2.push_back(rowvector_1);
	array2.push_back(rowvector_2);
	
	cout << array2.size() << " " << array2[1].size() << " " << array2.size() << endl;

    
    return 1;
    
	}
