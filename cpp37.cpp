

//3. WAP which illustrate the use of Method Overriding concept.

#include<iostream>
using namespace std;

class A
{
    public :

    void print()
    {
        cout << "HII" << endl;
    }
};

class B
{
    public : 

    void print()
    {
        cout << "HELLO" << endl;
    }
};

class C
{
    public : 

    void print()
    {
        cout << "H R U" << endl;
    }
};

int main()
{
    A a1;
    a1.print();

    B b1;
    b1.print();

    C c1;
    c1.print();
}
