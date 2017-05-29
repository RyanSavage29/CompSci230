#include <iostream>
using namespace std;
class Box_1
{
   public:	  
      Box_1() { 
        cout << "Box_1 Default Constructor called!" <<endl; 
      }
      ~Box_1() { 
         cout << "Box_1 Destructor called!" <<endl; 
      }
      
    Box_1(const Box_1 &b)
   {
      cout<<"Box_1 Copy constructor called "<<endl;
   }
	Box_1& operator = (const Box_1 &t)
   {
      cout<<"Box_1 Assignment operator called "<<endl;
   }     
};
int main()
{
	Box_1 box1;			
	Box_1 box2 = box1;	
	Box_1 box3;			
	box3 = box2;			
	cout << &box1 << endl;
	cout << &box2 << endl;
	cout << &box3 << endl;	
	return 0;	
	}

