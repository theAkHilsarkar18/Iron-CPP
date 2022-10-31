

// under construction


// 2. WAP to find factorial using recursion.


#include<iostream>
using namespace std;

int rec(int x,int y)
{
    if (x>0)
    {
        y = y * x;
        return y;
    }
    rec(x-1,y);
}

int main()

{

       


    int a,fact=1;
    cout << "enter a number : "<< endl;
    cin >> a;

    int c =rec(a,fact);
    cout << c;

//     for(int i=a; i>=1; i--)
//     {
//         fact = fact * i;
//     }

//     cout << fact;

}
