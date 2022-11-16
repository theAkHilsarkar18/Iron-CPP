
// WAP to check if a given character is vowel or consonant.

#include<iostream>
using namespace std;

int main()
{
    // vowel = a , e , i , o , u

    char a[100];
    cout << "enter a string : ";
    cin >> a;

    int count =0;

    for(int i=0; a[i]!='\0'; i++)
    {
        if(a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U'|| a[i]=='a' || a[i]=='e'|| a[i]=='o'|| a[i]=='i' || a[i]=='u')
        {
            count = 1;
           
        }
        
    }

    if(count==1)
    {
         cout << " string is vowel";
    }
    else
    {
        cout << " string is constont";
        
    }

    return 0;
}
