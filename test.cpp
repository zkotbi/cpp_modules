#include <iostream>
using namespace std;
 
// class name: Rectangle
class Rectangle {
  private:
    double length;
    double breadth;
 
  public:
    // parameterized constructor 
    Rectangle(double l, double b) {
      length = l;
      breadth = b;
    }
 

 
 
    double calculateArea() {
      return length * breadth;
    }

  // copy constructor with a Rectangle object as parameter copies data of the obj parameter
    // Rectangle(Rectangle &obj) {
    //   length = obj.length;
    //   breadth = obj.breadth;
    // }
};
int main() {
      // create objects to call constructors
Rectangle obj1(10,6);
Rectangle obj2 = obj1;   //copy the content using object
 
//print areas of rectangles
  cout << "Area of Rectangle 1: " << obj1.calculateArea();
  cout << "\nArea of Rectangle 2: " << obj2.calculateArea();
 
  return 0;
}