// 4. WAP which illustrates the use of public and private access modifiers.

#include<iostream>
using namespace std;

class Math
{
    private :
    int a,b,ans;

    public : 

    void read()
    {
        cout << "enter value of a and b : ";
        cin >> a >> b;
    }

    void addition()
    {
        ans = a + b;
        cout << "addition is : " << a+b;
    }

};

int main()
{
    Math m1;
    m1.read();
    m1.addition();
}
