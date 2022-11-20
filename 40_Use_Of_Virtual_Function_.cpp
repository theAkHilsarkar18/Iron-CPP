
// 4. WAP to demonstrate usage of Virtual Function.

#include <iostream>
using namespace std;

class RBI
{
public:
    virtual void gold();
};

class SBI : public RBI
{
public:
    void gold()
    {
        cout << "Interest = 8.00 % " << endl;
    }
};

class BOB : public RBI
{
public:
    void gold()
    {
        cout << "Interest = 8.22 % ";
    }
};

int main()
{
    RBI *r1;
    SBI s1;
    BOB b1;
    r1 = &s1;
    r1 = &b1;
    r1->gold();
    r1->gold();
}
