
// 2. WAP to create a class which Read and print Class, Student details using Two Classes. (Make two classes, create one classe's obj in another class.)

#include<iostream>
using namespace std;

class Read
{
    public : 

    int roll;
    char name[100];
    float per;

    void set()
    {
        cout << "\n\n";
        cout << "enter your roll number : ";
        cin >> roll;
        cout << "enter your name        : ";
        cin >> name;
        cout << "enter your perentage   : ";
        cin >> per;

    }
};

class Print
{
    public :

    void get()
    {
        Read h;
        h.set();
        cout <<"\n--------------------------------------------------------------------------------------------------------------------";
        cout << "\n\n";
        cout << "roll number  : " << h.roll << endl;
        cout << "student name : " << h.name << endl;
        cout << "percentage   : " << h.per << endl;
    }

};   

int main()
{
    
        
        Print p;
        p.get();
    
   
}
