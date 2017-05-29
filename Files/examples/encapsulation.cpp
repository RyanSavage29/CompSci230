#include<iostream>
using namespace std;

class Box {
   public:
      
      Box(double length, double width, double height)
      {
		  this->length = length;
		  this->width = width;
		  this->height = height; 
		  }
      
      
      double getVolume(void) {
         return length * width * height;
      }
		
   private:
      double length;      // Length of a box
      double width;       // width of a box
      double height;      // Height of a box
};


int main()

{
	Box* b = new Box(2,3,4);
	double volume = b->getVolume();
	cout << "volume = "<<volume<<endl;
	
	return 0;
	
	}
