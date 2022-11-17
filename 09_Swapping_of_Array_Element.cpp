


// 1. WAP to swap elements of two integer arrays using user define function.


#include<iostream>
using namespace std;

void swap(int len , int a[] , int b[])
{
     for(int i=0; i<len; i++)
    {
        a[i] = a[i] + b[i];
        b[i] = a[i] - b[i];
        a[i] = a[i] - b[i];
    }
}

int main()
{

    cout << "Enter Length of array : ";
    int len;
    cin >> len;

    int a[len],b[len],c[len];

    cout << "Enter element of array 1 : " << endl;
    for(int i=0; i<len; i++)
    {   
        cout << "a[" << i <<"] = ";
        cin >> a[i];
        cout << endl;
    }

    cout << "Enter element of array 2 : " << endl;
    for(int i=0; i<len; i++)
    {
        cout << "b[" << i <<"] = ";
        cin >> b[i];
        cout << endl;
    }

    cout << "-------------------------------------------------------------------------------\n\n";

    // for(int i=0; i<len; i++)
    // {
    //     a[i] = a[i] + b[i];
    //     b[i] = a[i] - b[i];
    //     a[i] = a[i] - b[i];
    // }

    swap(len,a,b);


    for(int i=0; i<len; i++)
    {
        cout << "a[" << i <<"] = " << a[i] << endl;
    }

    for(int i=0; i<len; i++)
    {
        cout << "b[" << i <<"] = " << b[i] << endl;
    }


}
