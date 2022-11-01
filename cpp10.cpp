
// 2. WAP to find factorial using recursion.

#include<iostream>
using namespace std;

void rec()
{
    int a,fact=1;
    cout << "enter a number : "<< endl;
    cin >> a;

    for(int i=a; i>=1; i--)
    {
        fact = fact * i;
    }

    cout << fact;
}

int main()

{

       
rec();

   

}
