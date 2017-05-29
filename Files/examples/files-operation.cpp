#include<iostream>
#include<fstream>

using namespace std;

int main() {

 ifstream myReadFile;
 myReadFile.open("0505matrix");
 
 char output[10];
 
 if (myReadFile.is_open()) 
	{
		while (!myReadFile.eof()) {


		myReadFile >> output;
    
		cout<<output<<endl;

			}
		}
		
		myReadFile.close();
	
	return 0;
		}
