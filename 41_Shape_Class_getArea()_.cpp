// 5. WAP to create an Class Shape. Make two sub-class Circle and Triangle which implements a method from Shape class called getArea().

#include<iostream>
using namespace std;

class Shape
{
    public : 

    int radius;
    int height , width;

    
};

class Circle : public Shape
{
    public : 

    void getArea()
    {
        cout << "Enter radius of circle    : ";
        cin >> radius;
        cout << "Area of Circle is         : " << 2 * 3.14 * radius << endl << endl;
    }
};

class Triangle : public Shape
{
    public : 

    void getArea()
    {
        cout << "Enter Height of Triangle : ";
        cin >> height;
        cout << "Enter Width of Triangel  : ";
        cin >> width;
        cout << endl << "Area of Triangle         : " << 0.5 * width * height << endl << endl;

    }
};

int main()
{
    Circle c1;
    c1.getArea();

    Triangle t1;
    t1.getArea();
    
}
