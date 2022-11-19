
// 4. WAP to create two class HighSchool and College with fields like
// id, stu_name, stu_roll_no, stu_standard, stu_age, stu_contact, stu_edu_institute_name and stu_address. 
//Make suitable setter and getter with use of static data members.

#include<iostream>
using namespace std;

class Highschool
{
    public : 

    int id;
    string name;
    int roll;
    int std;
    int age;
    long number;
    string insname;
    string add;

    void set()
    {
        cout << "\n\n";
        cout << "enter student id                 : ";
        cin >> id;
        cout << "enter student name               : ";
        cin >> name;
        cout << "enter student roll number        : ";
        cin >> roll;
        cout << "enter student standard           : ";
        cin >> std;
        cout << "enter student age                : ";
        cin >> age;
        cout << "enter parents mobile number      : ";
        cin >> number;
        cout << "enter education institution name : ";
        cin >> insname;
        cout << "enter addres of student          : ";
        cin >> add;

    }

    void get()
    {
        cout << "\n\n\n";
        cout << "Highschool's student details : " << endl;

        cout << "\nstudent's id               : " << id ;
        cout << "\nstudent's name             : " << name;
        cout << "\nstudent's roll number      : " << roll;
        cout << "\nstudent's standard         : " << std ;
        cout << "\nstudent's age              : " << age ;
        cout << "\nstudent's contact          : " << number;
        cout << "\nstudent's institution name : " << insname;
        cout << "\nstudent's address          : " << add;

    }
};

class College
{
     public : 

    int id;
    string name;
    int roll;
    int std;
    int age;
    long number;
    string insname;
    string add;

    void set()
    {
        cout << "\n\n";
        cout << "enter student id                 : ";
        cin >> id;
        cout << "enter student name               : ";
        cin >> name;
        cout << "enter student roll number        : ";
        cin >> roll;
        cout << "enter student standard           : ";
        cin >> std;
        cout << "enter student age                : ";
        cin >> age;
        cout << "enter parents mobile number      : ";
        cin >> number;
        cout << "enter education institution name : ";
        cin >> insname;
        cout << "enter addres of student          : ";
        cin >> add;

    }

    void get()
    {
        cout << "\n\n\n";
        cout << "Colleg's student details : " << endl;

        cout << "\nstudent's id               : " << id ;
        cout << "\nstudent's name             : " << name;
        cout << "\nstudent's roll number      : " << roll;
        cout << "\nstudent's standard         : " << std ;
        cout << "\nstudent's age              : " << age ;
        cout << "\nstudent's contact          : " << number;
        cout << "\nstudent's institution name : " << insname ;
        cout << "\nstudent's address          : " << add ;

    }
};

int main()
{
    Highschool h;
    h.set();
    h.get();

    College c;
    c.set();
    c.get();

}
