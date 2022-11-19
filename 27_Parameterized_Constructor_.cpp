
// 2. WAP to demonstrate example of parameterized constructor.

#include<iostream>
using namespace std;

class Math
{
    public :
    int a;
    int b;

    void addition()
    {
        cout << "simple function " << endl ;

    }

    Math(int a, int b)
    {
        cout << "addition is : " << a+b << endl;
        
    }
};

int main()
{
    Math m1(10,20);
    m1.addition();

}
