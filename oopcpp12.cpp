#include<iostream>
using namespace std;
class Dis
{
    public:

    int feet,inch;

    void read()
    {
        cout<<"Enter the feet & Inch"<<endl;
        cin>>feet>>inch;
    }

    void result(Dis d2)
    {   
        Dis d3;

        d3.feet = feet+d2.feet;
        d3.inch = inch + d2.inch;

        if(d3.inch>=12)
        {
            int f1 = d3.inch/12;
            d3.inch = d3.inch - (12*f1);
            d3.feet = f1+d3.feet;
        }
        cout<<"Answer is Feet ="<<d3.feet<<endl<<"Answer is Inch = "<<d3.inch<<endl;
    }
};
int main()
{
    Dis d1,d2;
    d1.read();
    d2.read();
    d1.result(d2);
    return 0;
}
