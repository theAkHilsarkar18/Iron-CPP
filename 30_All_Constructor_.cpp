
// 5. WAP to create a class which Set values of data members using default, parameterized and copy constructor.

#include<iostream>
using namespace std;

class Math
{
    public :
    int a,b;

    Math()
    {
        cout << "\nWellcome in Math's Function " << endl << endl;
        a = 9;
        b = 2;
    }

    Math(int x, int y)
    {
        cout << "Addition of Parameter : " << x+y << endl << endl;
    }

    Math(Math &m1)
    {
        cout << "Copy Constructor Multiplication : " << m1.a * m1.b << endl << endl;
    }

};

int main()
{
    Math m1;
    Math m2(50,50);
    Math m3(m1);
}
