
// 1. WAP to create a class Employee with setter and getter. Which have fields like id, name, role, salary, experience, address, email and contact. Get 5 records.

#include<iostream>
using namespace std;

class Emp
{
    private :

    int id,salary,exp;
    long contact;
    char name[50];
    char role[50];
    char add[50];
    char email[50];

    public :

    void set()
    {
        // cout << "enter your id , salary , experiance , contact number : " << endl;
        // cin >> id >> salary >> exp >> contact;

        cout << "enter id : " << endl;
        cin >> id;

        cout << "enter your name : " << endl;
        cin >> name;

        cout << "enter your role in company : " << endl;
        cin >> role;

        cout << "enter salary : " << endl;
        cin >> salary;

        cout << "enter your experiance in company (in year): " << endl;
        cin >> exp;
        
        cout << "enter your address : " << endl;
        cin >> add;

        cout << "enter your email address : " << endl;
        cin >> email;

        cout << "enter contact number : "<< endl;
        cin >> contact;

    }
    
    void get()
    {
        cout << "\n\n\n\n";
        cout << "id = " << id << endl;
        cout << "name = " << name;
        cout << endl << "role = " << role << endl << "salary = " << salary << endl;
        cout << "experiance = " << exp << endl;
        cout << "address = " << add;
        cout << endl << "email = " << email << endl << "contact = " << contact << endl;
    }


};

int main()
{
    Emp e1,e2,e3,e4,e5;

    e1.set();
    cout << "\n";
    e2.set();
    cout << "\n";
    e3.set();
    cout << "\n";
    e4.set();
    cout << "\n";
    e5.set();
    

    cout << "\n\n";
    cout << "\n\n";


    e1.get();
    cout << "\n\n";
    cout << "\n\n";

    e2.get();
    cout << "\n\n";
    cout << "\n\n";

    e3.get();
    cout << "\n\n";
    cout << "\n\n";

    e4.get();
    cout << "\n\n";
    cout << "\n\n";

    e5.get();
    cout << "\n\n";
    cout << "\n\n";

   
    

    
    

    

    
    

}
