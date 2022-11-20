// 1. Write a "Garage" class that has a "Car" that is having troubles with its "Motor".
// Use a function-level try block in the "Garage" class constructor to catch an exception (thrown from the "Motor" class) when its "Car" object is initialized.
// Throw a different exception from the body of the "Garage" constructor s handler and catch it in main( ).

#include <iostream>
using namespace std;

class Car
{

public:
    int a;
};

class Motor : public Car
{
    public :

    void set()
    {
        cout << "Enter your Payment Amount : ";
        cin >> a;
    }

};

class Garage : public Motor
{

public:

    Garage()
    {
        set();
        try
        {
            if (a == 0 || a < 0)
            {
                throw a;
            }
            else
            {
                cout << "Payment Successfull , Thank You !!";
            }
        }
        catch (int a)
        {
            cout << "Please Enter Valid Amount !!";
        }
    }
};

int main()
{
    Garage g1;
}
