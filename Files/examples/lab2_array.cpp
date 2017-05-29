#include <iostream>
#include <string.h>
using namespace std;

void printArray(char *array, int length)
{
	int c;
	for(c=0;c<length;c++)
		cout << *(array+c); 
	cout << endl;	
	}

int main (int argc, char *argv[]) 
{

    int x, y, i, j, length;
    cin >> x;
    cin >> y;
    
    char array[x][y];
    
    for(i=0;i<x;i++)
     for(j=0;j<y;j++)
     {  
		 cin >> array[i][j];
	 }
	 length = x*y; 
	 printArray(&array[0][0], length);
	return 1;
	}


// how to pass the target work to the check function?
