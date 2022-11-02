
// WAP to create class to read time in seconds and convert into time in (HH:MM:SS) format.

#include<iostream>
using namespace std;

class Time
{
    public :

    int sec()
    {
        int s;
        cout << "enter value in second : " << endl;
        cin >> s;
        
        return s;
    }

    void result()
    {
        Time a1;
    int second = a1.sec();


    int i=0;

    do
    {
        second = second - 60;
        i++;
    } while (second>=60);
    
    int j=0;

    if (i>=60)
    {

        do
        {
            i = i - 60;
            j++;

        } while (i>=60);

    }

    cout << j << " : " << i << " : " << second << endl;

    }
};

int main()
{
    
        Time a;
        a.result();

    
}
