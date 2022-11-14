
// 4. WAP to demonstrate usage of Virtual Function.

#include<iostream>
using namespace std;

class Family
{
    public : 

    virtual void best();
};

class Friend : public Family
{
    public :

    void best()
    {
        cout << " :: TheAkhilSarkar :: " << endl;
    }
};

class Partner : public Family
{
    public : 

    void best() 
    {
        cout << " :: TheAkhilSarkar :: " << endl;
    }
};

int main()
{
    Friend f1;
    f1.best();

    Partner p1;
    p1.best();
    
}