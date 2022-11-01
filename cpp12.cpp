

// 1. WAP to create a class to read and add two distance. (e.g. 8 feet 16 inch + 4 feet 14 inch = 14 feet 6 inch)

#include<iostream>
using namespace std;

class Finch
{
    public :

    int fin()
    {
        int f;
        cout << "enter value of feet : " << endl;
        cin >> f;

        int in;
        cout << "enter value of inch : " << endl;
        cin >> in;

        int add = (f*12) + in;

        return add;

    }

    void calc()
    {
        Finch a1,a2;

        int ans1 = a1.fin();
        int ans2 = a2.fin();
        int ans  = ans1 + ans2;

        cout << ans << endl;
    
       // 1 feet = 12 inch

        int i=0;
        do
        {
            ans = ans - 12;
            i++;

        } while (ans>=12);

        cout << "feet : " << i << " inch : " << ans;
    


    }




};

int main()
{
    
   Finch final;

   final.calc();
   
}
