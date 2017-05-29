#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cstring>
using namespace std;


void printVector(vector<vector<char> > &matrix)
{
	int i,j;
	for(i=0;i<matrix.size();i++)
	{		cout << endl;
			for(j=0;j<matrix[i].size();j++)
				cout << matrix[i][j];
			}
  
}



int main(int argc, char*argv[])
{
  char current;
  int ROW;
  int COL;
  cin >> ROW;
  cin >> COL;

  typedef vector<vector<char> > ARRAY;
  ARRAY array2;
  vector<char> rowvector;

  for (int i = 0; i < ROW;  i++)
    {
      rowvector.clear();
      for (int j = 0; j < COL; j++)
	{
	  cin >> current;
	  rowvector.push_back(current);
	}
      array2.push_back(rowvector);
    }
  int x = atoi(argv[2]);
  int y = atoi(argv[3]);
  
  printVector(array2);

  return 0;

}
