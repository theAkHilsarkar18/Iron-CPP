
// 6. WAP to read and print employee information with use of multilevel inheritance. (as like in below image)

#include <iostream>
using namespace std;

class A
{
public:
    // sequence
    // id
    // name
    // role
    // salary
    // experience
    // comapany name
    // address
    // email
    // contact

    int id, exp;
    string name, role, cname, add, email;
    long salary, contact;

    void set()
    {
        cout << "Enter ID number       : ";
        cin >> id;
        cout << "Enter Employee Name   : ";
        cin >> name;
        cout << "Enter Role in Company : ";
        cin >> role;
    }
};

class B : public A
{
public:
    void set()
    {
        cout << "Enter Employee Salary : ";
        cin >> salary;
        cout << "Enter Experience year : ";
        cin >> exp;
    }
};

class C : public B
{
public:
    void set()
    {
        cout << "Enter Company Name    : ";
        cin >> cname;
        cout << "Enter Address         : ";
        cin >> add;
    }

    void get()
    {
        cout << "\n--------------------------------------------------------------------------------------------\n\n";

        cout << "Name        = " << name << endl;
        cout << "Role        = " << role << endl;
        cout << "Salary      = " << salary << endl;
    }
};

class D : public C
{
    public : 

    void set()
    {
        cout << "Enter Yout Email      : ";
        cin >> email;
        cout << "Enter Contact no.     : ";
        cin >> contact;
    }

    void get()
    {
        cout << "\n\n-----------------------------------------------------------------------------------------\n\n";

        cout << "Id           = " << id << endl;
        cout << "Name         = " << name << endl;
        cout << "Role         = " << role << endl;
        cout << "Salary       = " << salary << endl;
        cout << "Experience   = " << exp << endl;
        cout << "Company Name = " << cname << endl;
        cout << "Email        = " << email << endl;
        cout << "Contact      = " << contact << endl;
    }
};

int main()
 {

//     A a1;
//     a1.set();

//     B b1;
//     b1.set();

//     C c1;
//     c1.set();
//     c1.get();

//     D d1;
//     d1.set();
//     d1.get();

        D d1;
        d1.A::set();
        d1.B::set();
        d1.C::set();
        d1.D::set();

        d1.C::get();
        d1.D::get();

}
