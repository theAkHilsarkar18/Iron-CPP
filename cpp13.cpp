
// 2. WAP to create a class to read and add two times.


#include<iostream>
using namespace std;

class Time
{
    public : 

    int h,m,s;

    void read()
    {
        cout << "enter hour minute and second : ";
        cin >> h >> m >> s;
    }

    void result(Time a2)
    {
        Time a3;
        int hh,mm,ss;

        a3.h = h + a2.h;
        a3.m = m + a2.m;
        a3.s = s + a2.s;

        if (a3.s>=60)
        {
            mm = a3.s/60;
            ss = a3.s - (60*mm);
            mm = mm + a3.m;

            if (mm>=60)
            {
                hh = mm/60;
                mm = mm - (60*hh);
                hh = hh + a3.h;
                cout << hh << ":" << mm << ":" << ss;
            }
            else
            {
                cout << hh << ":" << mm << ":" << ss;
            }
            
        }
        else
        {
            cout << h << ":" << mm << ":" << ss;
        }
        
    }
};

int main()
{
    Time a1,a2;
    a1.read();
    a2.read();

    a1.result(a2);
}



// second method 




// #include <iostream>
// using namespace std;

// class Time
// {
// public:
//     int ak()
//     {
//         int h;
//         cout << "enter value in hour : " << endl;
//         cin >> h;

//         int m;
//         cout << "enter value in minutes : " << endl;
//         cin >> m;

//         int s;
//         cout << "enter value in second : " << endl;
//         cin >> s;

//         int second = (h * 60 * 60) + (m * 60) + s;

//         return second;
//     }

//     void result()
//     {
//         Time a1, a2;

//         int t1 = a1.ak();
//         int t2 = a2.ak();

//         int sec = t1 + t2;

//         int i = 0;

//         do
//         {
//             sec = sec - 60;
//             i++;
//         } while (sec >= 60);

//         int j = 0;

//         do
//         {
//             i = i - 60;
//             j++;
//         } while (i >= 60);

//         cout << j << " : " << i << " : " << sec;
//     }
// };

// int main()
// {
//     Time a;
//     a.result();
// }
