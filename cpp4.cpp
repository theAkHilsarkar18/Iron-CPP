
#include<iostream>
using namespace std;

int main()
{
    // 2. WAP to find leap years from 2000 to 3000.

    int leap=2000,i;
    
    
    while(leap <=3000)
    {
        cout << leap << " ";
        leap = leap + 4;
    }

    return 0;
}