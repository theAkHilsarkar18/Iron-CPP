
// 5. WAP to demonstrate example of hierarchical inheritance to get square and cube of a number.

#include<iostream>
using namespace std;

class Math
{
    public : 
    int a;
};

class Cube : public Math
{
    public :

    void cube()
    {
        cout << "Enter A Number : ";
        cin >> a;
        cout << "Cube is : " << a * a * a << endl;
    }
};

class Square : public Math
{
    public : 
    void square()
    {
        cout << "Enter A Number : ";
        cin >> a;
        cout << "Square is : " << a * a  << endl;
    }
};

int main()
{
    Cube c1;
    c1.cube();

    Square s1;
    s1.square();

}
