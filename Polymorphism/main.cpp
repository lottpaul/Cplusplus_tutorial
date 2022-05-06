#include <iostream>
#include <math.h>
using namespace std;

//Example taken & extended from https://www.tutorialspoint.com/cplusplus/cpp_polymorphism.htm

# define M_PIl          3.141592653589793238462643383279502884L /* pi */

class Shape {
protected:
    double width, height;

public:
    Shape( double a = 0, double b = 0){
        width = a;
        height = b;
    }

    //Making it Virtual or Pure Virtual will change the function drastically.
    double area() {
        cout << "Parent class area :" <<endl;
        cout << "We don't know the type of shape: width(" << width << ") height(" << height << ")" <<endl;
        return 0;
    }
};
class Rectangle: public Shape {
public:
    Rectangle( double a = 0, double b = 0):Shape(a, b) { }

    double area () {
        cout << "Rectangle class area :" <<endl;
        return (width * height);
    }
};

class Triangle: public Shape {
public:
    Triangle( double a = 0, double b = 0):Shape(a, b) { }

    double area () {
        cout << "Triangle class area :" <<endl;
        return (width * height / 2.0);
    }
};

class Circle: public Shape {
public:
    Circle(double d=0):Shape(d,d){}
    double area(){
        cout << "Circle class area:" << endl;
        if (width<=height){
            return M_PIl*pow(width/2.0, 2.0);
        }
        else{
            return M_PIl*pow(height/2.0, 2.0);
        }

    }
};

// Main function for the program
int main() {
    Shape s1 (10, 20);
    Rectangle rec(10,7);
    Triangle  tri(10,5);
    Circle cir(2.1);

    std::cout << s1.area() << std::endl;
    std::cout << rec.area() << std::endl;
    std::cout << tri.area() << std::endl;
    std::cout << cir.area() << std::endl;

    Shape *shape;
    // store the address of Rectangle
    shape = &rec;
    // call rectangle area.
    shape->area();
    // store the address of Triangle
    shape = &tri;
    // call triangle area.
    shape->area();

    return 0;
}