
// 2. WAP to create a class that contains four member functions, with 0, 1, 2, and 3 int arguments, respectively. 
// Create a main( ) that makes an object of your class and calls each of the member functions.
//  Now modify the class so it has instead a single member function with all the arguments defaulted.

#include<iostream>
using namespace std;

class Math
{
    public :

    void calc()
    {
        cout << "NO PARAMETER " << endl;
    }

    void calc(int a)
    {
        cout << "1 PARAMETER : Vlaue is : " << a;
    }

    void calc(int a , int b)
    {
        cout << "2 PARAMETER : Value is : " << a << " : " << b << endl;
    }

    void calc(int a , int b , int c)
    {
        cout << "3 PARAMETERE : Value is : " << a << " : " << b << " : " << c << endl;
    }



};

int main()
{
    Math m1;

    m1.calc();
    m1.calc(10);
    m1.calc(20,30);
    m1.calc(40,50,60);
    
}
