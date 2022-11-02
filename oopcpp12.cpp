
// 1. WAP to create a class to read and add two distance. (e.g. 8 feet 16 inch + 4 feet 14 inch = 14 feet 6 inch)

#include<iostream>
using namespace std;

class Finch
{
    public : 

    int fit,in;

    void read()
    {
        cout << "enter value of feet and inch : ";
        cin >> fit >> in;

    }

    void result(Finch a2)
    {
        Finch a3;
        int feet,inch;

        a3.fit = fit + a2.fit;
        a3.in = in + a2.in;

        if(a3.in >= 12)
        {
            feet = a3.in/12;
            inch = a3.in - (12*feet);
            feet = feet + a3.fit;

            cout << feet << ":" << inch;
        }
        else
        {
            cout << a3.fit << ":" << a3.in;
        }
    }
};

int main()
{
    Finch a1,a2;

    a1.read();
    a2.read();

    a1.result(a2);
}



// #include<iostream>
// using namespace std;

// class Finch
// {
//     public :

//     int fin()
//     {
//         int f;
//         cout << "enter value of feet : " << endl;
//         cin >> f;

//         int in;
//         cout << "enter value of inch : " << endl;
//         cin >> in;

//         int add = (f*12) + in;

//         return add;

//     }

//     void calc()
//     {
//         Finch a1,a2;

//         int ans1 = a1.fin();
//         int ans2 = a2.fin();
//         int ans  = ans1 + ans2;

//         cout << ans << endl;
    
//        // 1 feet = 12 inch

//         int i=0;
//         do
//         {
//             ans = ans - 12;
//             i++;

//         } while (ans>=12);

//         cout << "feet : " << i << " inch : " << ans;
    


//     }




// };

// int main()
// {
    
//    Finch final;

//    final.calc();
   
// }
