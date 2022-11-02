
// WAP to create class to read time in seconds and convert into time in (HH:MM:SS) format.


#include<iostream>
using namespace std;

class Time
{
    public : 

    int s,m=0,h=0;

    void read()
    {
        
        cout << "enter second : ";
        cin >> s;

    }

    void result()
    {
        if(s>=60)
        {
            m = s/60;
            s = s - (m*60);

            if (m>=60)
            {
                h = m/60;
                m = m - (h*60);
                cout << h << " : " << m << " : " << s;
            }
            else
            {
                cout << h << " : " << m << " : " << s;
            }
            
        }   
        else
        {
            cout << h << " : " << m << " : " << s;
        }    
    }
};

int main()
{
    Time a1;
    a1.read();
    a1.result();
}


































// #include<iostream>
// using namespace std;

// class Time
// {
//     public :

//     int sec()
//     {
//         int s;
//         cout << "enter value in second : " << endl;
//         cin >> s;
        
//         return s;
//     }

//     void result()
//     {
//         Time a1;
//     int second = a1.sec();


//     int i=0;

//     do
//     {
//         second = second - 60;
//         i++;
//     } while (second>=60);
    
//     int j=0;

//     if (i>=60)
//     {

//         do
//         {
//             i = i - 60;
//             j++;

//         } while (i>=60);

//     }

//     cout << j << " : " << i << " : " << second << endl;

//     }
// };

// int main()
// {
    
//         Time a;
//         a.result();

    
// }
