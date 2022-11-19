
// 2. WAP to make Railway Reservation System.
// Requirements:
// (A) User Input Train Number , Train Name , Source , Destination , Train Time.
// (B) Display Record By Search Train Number.
// (C) Minimum 3 Input Train Record.

#include <iostream>
using namespace std;

class Railway
{
public:
    int tno;
    string tname;
    string tsource;
    string desti;
    int time;

    void design()
    {
        cout << "\n\n";
        cout << "< < < < < < < < < < Welcome , Indian Railway Reservation System > > > > > > > > > >\n\n";
        cout << "\n\t<-------- Enter which trains you want to prefer for travel -------->\n\n";
       

       
    }
    void set()
    {
        
        cout << "Enter train number      : ";
        cin >> tno;
        cout << "Enter train's name      : ";
        cin >> tname;
        cout << "Enter train source      : ";
        cin >> tsource;
        cout << "Enter train destination : ";
        cin >> desti;
        cout << "Enter train's time      : ";
        cin >> time;
        
        cout << "\n----------------------------------------------------------------------------------------------------\n\n";
    }

    void get(int n)
    {
        if(n == tno)
        {
            cout << "\n\n \t\t - - - - - - - Booking Successfull - - - - - - -";
            cout << "\n\t\t - - - - - - - This is train detail - - - - - - - \n";

            cout << "\nTrain number is   : " << tno;
            cout << "\nTrains name is   : " << tname;
            cout << "\nTrains source is : " << tsource;
            cout << "\nTrains time is   : " << time;
            cout << "\n\n";

        }
        // else
        // {
        //     cout << "\n\n!! Please Enter valid Train number !!\n\n";
        // }
    }
};

int main()
{
    Railway r1[100];
    r1[0].design();
    
    

    for(int i=0; i<3; i++)
    {
        r1[i].set();
    }

    int n;
    cout << "Enter in which train number you want to travel : ";
    cin >> n;
    
    for(int i=0; i<3; i++)
    {
        r1[i].get(n);
    }
    
}
