
// 5. WAP to create a class which have both static data member and static member function.
// That class gives details of all states in India.

#include<iostream>
using namespace std;

class India
{
    private : 
    static string name[28];
    static int len;

    public : 
    
    static void length()
    {
        cout << "How many States data  you want to print : ";
        cin >> len;
    }
    static void input()
    {
        for(int i=0; i<len; i++)
        {
            cin >> name[i];
        }
    }
    static void output()
    {
        for(int i=0; i<len; i++)
        {
            cout << i+1 << ". " << name[i] << endl;
        }
    }
};

string India :: name[28];
int India :: len;

int main()
{
    India :: length();
    India :: input();
    India :: output();
}
