
// WAP to illustrate the use of inline function by creating a function which prints a multiplication table of given number.

#include<iostream>
using namespace std;

void table(int a)
{
    
    for(int i=1; i<=10; i++)
    {
        cout << a << "*" << i << "=" << a*i << endl;
    }
}
int main()
{
    int x;
    cout << "enter table number : ";
    cin >> x;

    table(x);
}
