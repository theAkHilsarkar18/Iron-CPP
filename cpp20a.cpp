

// 5. WAP to create a class which have both static data member and static member function. That class gives details of all states in India.

#include <iostream>
using namespace std;

class India
{
public:
    static string st[28];

    static void states()
    {
        for (int i = 0; i < 29; i++)
        {
            cout << "Enter State Name : ";
            cin >> st[i];
        }
    }

    static void printStates()
    {
        for (int i = 0; i < 29; i++)
        {
            cout << st[i] << endl;
        }
    }
};

string India ::st[28];

int main()
{
    India ::states();
    India ::printStates();
}
