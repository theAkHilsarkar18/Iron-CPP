
// 4. WAP which perform Addition of members of two different classes using friend Function.

#include<iostream>
using namespace std;

class B;
class A
{
    private : 
    int a = 10;
    friend void  addition(A a1, B b1);
};

class B
{
    private : 
    int b = 20;
    friend void  addition(A a1, B b1);
};

void  addition(A a1, B b1)
{
    cout << a1.a + b1.b;
}

int main()
{
    A a1;
    B b1;
    addition(a1,b1);
}
