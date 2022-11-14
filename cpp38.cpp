// 3. WAP which illustrate the use of Method Overriding concept.

#include <iostream>
using namespace std;

class BestFriend
{
public:
    void best()
    {
        cout << " :: TheAkhilSarkar :: " << endl;
    }
};

class BestBrother
{
public:
    void best()
    {
        cout << " :: TheAkhilSarkar :: " << endl;
    }
};

class BestSupporter
{
public:
    void best()
    {
        cout << " :: TheAkhilSarkar :: " << endl;
    }
};

class BestPartner
{
public:
    void best()
    {
        cout << " :: TheAkhilSarkar :: " << endl;
    }
};

int main()
{
    BestFriend b1;
    b1.best();

    BestBrother b2;
    b2.best();

    BestPartner b3;
    b3.best();

    
}