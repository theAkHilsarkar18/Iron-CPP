
// 3. WAP to convert given string into toggle case.

#include<iostream>
using namespace std;

int main()
{
    char a[100],ch;
    cout << "enter a string : ";
    cin >> a;

    for(int i=0; a[i]!='\0'; i++)
    {
        if(a[i]>='A' && a[i]<='Z')
        {
            ch = a[i] + 32; // ascii value defference between small letter and capital is 32
            cout << ch;
        }
        else
        {
            ch = a[i] - 32;
            cout << ch;
        }
    }


    return 0;
}
