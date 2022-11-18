


// 3. WAP to create a class Hotel with fields like id, name, type, staff_size, room_size, establish_year, address, rating_type and website.
// Illustrate the use of encapsulation (strict encapsulation) with this keyword.

#include<iostream>
using namespace std;

class Hotel
{
    private :

    int id;
    string name;
    string type;
    int staff,room,year;
    string add;
    int rating;
    string website;

    public : 

    void set(int id , string name , string type , int staff ,int room , int year , string add , int rating , string website)
    {
        this -> id = id;
        this -> name = name;
        this -> staff = staff;
        this -> room = room;
        this -> year = year;
        this -> add = add;
        this -> rating = rating;
        this -> website = website;
    }

    void get()
    {
        cout << "\n--------------------------------------------------------------------------------------------------------\n";
        cout << "user id                   : " << id << endl;
        cout << "hotel name                : " << name << endl;
        cout << "type of hotel             : " << type << endl;
        cout << "staff size of hotel       : " << staff << endl;
        cout << "room size in hotel        : " << room << endl;
        cout << "establish year of hotel   : " << year << endl;
        cout << "address of hotel          : " << add << endl;
        cout << "ratting of hotel          : " << rating << endl;
        cout << "website of hotel          : " << website << endl;

    }
};

int main()
{
    int id;
    string name;
    char type[100];
    int staff,room,year;
    string add;
    int rating;
    char website[100];

        cout << "enter your id                : ";
        cin >> id;
        cout << "enter your name              : ";
        cin >> name;
        cout << "enter hotel type             : ";
        cin >> type;
        cout << "enter staff size , room size : ";
        cin >> staff >> room;
        cout << "enter establish year         : ";
        cin >> year;
        cout << "enter rating of hotel        : ";
        cin >> rating;
        cout << "enter website detail         : ";
        cin >> website;

    Hotel h;
    
    h.set(id,name,type,staff,room,year,add,rating,website);
    cout << "\n\n\n\n";
    h.get();

}
