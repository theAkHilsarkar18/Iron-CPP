

//1. WAP to demonstrate example of default constructor or no argument constructor.

#include<iostream>
using namespace std;

class Math
{
    public : 
    int a;
    int b;

    Math()
    {
        a = 10;
        b = 20;

        cout << "addition is : " << a+b << endl;

    }
};

int main()
{
    Math m1;
}
