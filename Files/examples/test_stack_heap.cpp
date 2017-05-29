#include <iostream>

using namespace std;

class Box_1
{
   public:
	  int test_1;
	  
      Box_1() { 
         cout << "Box_1 Constructor called!" <<endl; 
      }
      ~Box_1() { 
         cout << "Box_1 Destructor called!" <<endl; 
      }
};

class Box_2
{
   public:
	  int test_2;
	  
      Box_2() { 
         cout << "Box_2 Constructor called!" <<endl; 
      }
      ~Box_2() { 
         cout << "Box_2 Destructor called!" <<endl; 
      }
};

int main( )
{
   Box_1 myBox_1;
   Box_1 *myBox_3;   
   Box_2 *myBox_2 = new Box_2();
      
//   test_1();
//   test_2();
   
// delete myBoxArray_2;   


   return 0;
}

/*
void test_1()
{
	Box_1 *myBox = new Box_1();
	myBox->test_1 = 1;
	cout << "I'm in test_1 function"<<endl;
	
	}
	
void test_2()
{
	Box_2 myBox;
	myBox.test_2 = 1;
	cout << "I'm in test_2 function"<<endl;
	
	}	
*/
