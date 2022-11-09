
// 2. WAP with a mother class and an inherited daugther class.
// Both of them should have a method void display ()that prints a message (different for mother and daugther). 
// In the main define a daughter and call the display() method on it.

#include<iostream>
using namespace std;

class Mother
{
    public : 
    
    void display()
    {
        cout << "Mother : Hii Dear ! How Are You.." << endl;
    }
};

class Daughter : public Mother
{
    public : 

    void display()
    {
        Mother :: display();
        cout << "Daughter : Hii Mom ! I am Fine.." << endl;
    }
};

int main()
{
    Daughter d1;
    d1.display();
}
