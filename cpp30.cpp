
//  1. WAP that defines a shape class with a constructor that gives value to width and height. 
//  The define two sub-classes triangle and rectangle,that calculate the area of the shape area (). 
//  In the main, define two variables a triangle and a rectangle and then call the area() function in this two varibles.

#include<iostream>
using namespace std;

class Shape
{
    public :
    int width,height;

    Shape()
    {
        cout << "Enter Value of Width and Height : ";
        cin >> width >> height;
    }
};

class Triangle : public Shape
{
    public : 

    int area()
    {
        return 0.5 * width * height;
    }
};

class Rectangle : public Shape
{
    public : 

    int area()
    {
        return width * height;
    }
};

int main()
{
    Triangle t1;
    Rectangle r1;

    int triangle , rectangle;

    triangle = t1.area();
    cout << "Area of Triangle  : " << triangle << endl;

    rectangle = r1.area();
    cout << "Area of Rectangle : " << rectangle << endl;
}
