
// 2. WAP to find factorial using recursion.


#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n > 1)
    {
        return n * factorial(n - 1);
    }
    else
    {
         return 1;
    } 
}

int main()
{
    int a;
    cout << "enter a number : ";
    cin >> a;

    factorial(a);
}
