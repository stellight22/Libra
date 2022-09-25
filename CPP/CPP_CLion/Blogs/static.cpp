#include <iostream>
 
using namespace std;

class Box 
{
   public:
      static int objectCount;
      
      // Constructor definition
      Box(double l = 2.0, double b = 2.0, double h = 2.0) 
      {
         cout <<"Constructor called." << endl;
         length = l;
         breadth = b;
         height = h;

         // Increase every time object is created
         //objectCount++;
      }
      double Volume() 
      {
         return length * breadth * height;
      }
      static int getCount() 
      {
         return objectCount;
      }
      
   private:
      double length;     // Length of a box
      double breadth;    // Breadth of a box
      double height;     // Height of a box
};

// Initialize static member of class Box
int Box::objectCount = 9;

int main() 
{
   // Print total number of objects before creating object.
   cout << "Inital Stage Count: " << Box::getCount() << endl;

   Box Box1(3.3, 1.2, 1.5);    // Declare box1
   cout << "Box 1 get count: " << Box1.getCount()<<endl;
   Box Box2(8.5, 6.0, 2.0);    // Declare box2
   cout << "Box 2 get count: " << Box2.getCount()<<endl;
   Box Box3(2.2, 6.0, 4.8);    // Declare box2
   cout << "Box 3 get count: " << Box3.getCount()<<endl;

   // Print total number of objects after creating object.
   cout << "Final Stage Count: " << Box::getCount() << endl;

   return 0;
}