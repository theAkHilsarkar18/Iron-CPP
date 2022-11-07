
// 4. WAP which perform Addition of members of two different classes using friend Function.

#include<iostream>
using namespace std;

class Math
{
    private : 
    int a,b;
    friend void addition(Math m1);
};

void addition(Math m1)
{
    m1.a = 10;
    m1.b = 20;

    cout << "addition is : " << m1.a + m1.b;
}

int main()
{
    Math m1;
   addition(m1);
}
