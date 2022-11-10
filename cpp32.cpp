
// 3. WAP with a mother class animal. Inside it define a name and an age variables, and set_value() function.
//  Then create two bases variables Zebra and Dolphin which write a message telling the age, the name and giving some extra information
// (e.g. place of origin).

#include <iostream>
using namespace std;

class Zebra
{
public:
    string place;
    string origin;

    void set()
    {
        cout << "Enter place of Zebra  : " ;
        cin >> place;
        cout << "Enter origin of Zebra : ";
        cin >> origin;
    }
};

class Dolphine
{
public:
    string place1;
    string origin1;

    void set()
    {
        cout << "Enter place of Dolphine  : " ;
        cin >> place1;
        cout << "Enter origin of Dolphine : ";
        cin >> origin1;
    }
};

class Animal : public Zebra, public Dolphine
{
public:
    string name;
    int age;

    void set()
    {
        cout << "Enter name of animal : ";
        cin >> name;
        cout << "Enter age of animal  : ";
        cin >> age;
    }
};

int main()
{
    Animal a1,a2;
    a1.set();
    Zebra z1;
    z1.set();

    a2.set();
    Dolphine d1;
    d1.set();

}
