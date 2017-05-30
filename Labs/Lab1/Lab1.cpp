/*******************************
 * Programmer: Ryan Strenkowski
 * Instructor: Dr. Mao
 * Course: CSC230-03
 * Lab1
 ******************************/ 

#include <iostream>
using namespace std;


int main()
{
	int x, y;

	cin >> x;
	cin >> y;
	
	char arr [x][y];
	
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			char num;
			cin >> num;
			arr[i][j] = num;
		}
	}
	
	for (int j = 0; j < x; j++)
	{
		for (int k = 0; k < y; k++)
		{
			cout << arr[j][k] << " ";
		}
		cout << endl;
	}
	return 0;
}