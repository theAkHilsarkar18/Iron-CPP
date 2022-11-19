// 3. WAP to demonstrate example of copy constructor.

#include<iostream>
using namespace std;

class Math
{
    public : 
    int a;
    Math(Math & m1)
    {
        cout << "hello " << endl;
        cout << m1.a;
    }

    Math()
    {
        cout << "hii " << endl;
        a=10;
        
    }
};

int main()
{
    Math m1;
    Math m2(m1);
}
