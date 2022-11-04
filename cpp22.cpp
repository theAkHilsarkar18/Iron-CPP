// 3. WAP to make Supermarket Billing System.
// Requirements:
// (A) Verify User Id And Password
// (B) User Input Item Number , Item Name , Quantity , Tax , Discount.
// (C) Display All Record In Ascending order (by item Number)

#include <iostream>
using namespace std;

class Market
{
public:

    

    void verify()
    {
        // (A) Verify User Id And Password
        Market m;
        string id = "admin";
        int password = 1234; 

        string a;
        int b;

        cout << "\n\nenter user id : ";
        cin >> a;
        cout << "enter pasword : ";
        cin >> b;

        if(id == a && password == b)
        {
            cout << "Login Successful";
        }
        else
        {
            cout << "Enter correct password or user id";
            m.verify();
        }

    }

        int inum;
        string iname;
        int iq;
        int tax;
        int disc;

    void in()
    {
        // (B) User Input Item Number , Item Name , Quantity , Tax , Discount.



        cout << "Enter item number         : ";
        cin >> inum;
        cout << "Enter item name           : ";
        cin >> iname;
        cout << "Enter item quantity       : ";
        cin >> iq;
        cout << "Enter tax percentage      : ";
        cin >> tax;
        cout << "Enter Discount percentage : ";
        cin >> disc;

    }

    void out()
    {
        cout << "\n Item Number        : " << inum;
        cout << "\n Item Name          : " << iname;
        cout << "\n Item Quantity      : " << iq;
        cout << "\n Tax Percentage     : " << tax;
        cout << "\n Disount Percentage : " << disc;
    }

   
};

int main()
{
    Market m1[10],m2[10];
    m1[0].verify();

    int n;
    cout << "\n\nhow many item want you purchase ? : ";
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cout << "\n\n";
        m1[i].in();
    }

    Market temp;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(m1[i].inum > m1[j].inum)
            {
                temp = m1[i];
                m1[i] = m1[j];
                m1[j] = temp;
            }
        }
    }

    cout <<"--------------------------------------------------------------------------------------------------------------------------------------";

    for(int i=0; i<n; i++)
    {
        cout << "\n\n";
        m1[i].out();
    }

    cout << "\n\n";
}


