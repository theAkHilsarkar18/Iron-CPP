
// 2. WAP to create a class to read and add two times.

#include <iostream>
using namespace std;

class Time
{
public:
    int ak()
    {
        int h;
        cout << "enter value in hour : " << endl;
        cin >> h;

        int m;
        cout << "enter value in minutes : " << endl;
        cin >> m;

        int s;
        cout << "enter value in second : " << endl;
        cin >> s;

        int second = (h * 60 * 60) + (m * 60) + s;

        return second;
    }

    void result()
    {
        Time a1, a2;

        int t1 = a1.ak();
        int t2 = a2.ak();

        int sec = t1 + t2;

        int i = 0;

        do
        {
            sec = sec - 60;
            i++;
        } while (sec >= 60);

        int j = 0;

        do
        {
            i = i - 60;
            j++;
        } while (i >= 60);

        cout << j << " : " << i << " : " << sec;
    }
};

int main()
{
    Time a;
    a.result();
}
