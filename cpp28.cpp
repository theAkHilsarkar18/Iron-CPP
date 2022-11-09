
// 4. WAP to demonstrate example of destructors.

#include<iostream>
using namespace std;

class Account
{
    public :

    // to call in last when programme is run use destructor
    // exa

    ~Account()
    {
        cout << "Thank you / Visit Again : " << endl;
    }
    
    // to call first when programme is run use constructor
    // exa

    Account()
    {
        cout << "Login System : " << endl;
    } 

    
};

int main()
{
    Account a1;
}
