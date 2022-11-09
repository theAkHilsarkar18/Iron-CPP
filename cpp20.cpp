
// 1. WAP to create a class for student to get and print details of N students. (with use of array of objects)

#include<iostream>
using namespace std;

class Student
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
       

    }

    void get()
    {
        cout << "\n\n\n";
        cout << "Student's details : " << endl;

        cout << "\nstudent's id               : " << id ;
        cout << "\nstudent's name             : " << name;
        cout << "\nstudent's roll number      : " << roll;
        cout << "\nstudent's standard         : " << std ;
        cout << "\nstudent's age              : " << age ;
        cout << "\nstudent's contact          : " << number;
       
    }
};

int main()
{
    Student s[10];
    int n;
    cout << "enter size of array : ";
    cin >> n;

    for(int i=0; i<n; i++)
    {
        s[i].set();
    }

    for(int i=0; i<n; i++)
    {
        s[i].get();
    }
}
