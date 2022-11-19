
// 5. WAP to make Bank Management System. (like shown in below images)

#include <iostream>
using namespace std;

class Bank
{
public:
    string name, email;
    long account, number;
    char n;
    char a;
    int x;
    long def = 200000;
    long dep, with;
    void phase1()
    {
        cout << "\n\n\t\t\t\t -: BANK MANAGEMENY SYSTEM :-\n";
        cout << "----------------------------------------------------------------------------------------------------------";

        cout << "\n\n\t\t\t\t -: Programme Designed By :-\n";
        cout << "----------------------------------------------------------------------------------------------------------";
        cout << "\n\n\t\t\t\t -:     Akhil Sodvadiya    :-\n";

        cout << "\n\n\t\t\t\t -:        Trainer        :-\n";
        cout << "----------------------------------------------------------------------------------------------------------";
        cout << "\n\t\t\t\t -:     Vidit Savaliya    :-\n";

        cout << "\n\n\t\t\t      Press Any Key And Enter To Continue... \n";

        cin >> n;

        if (n >= 97 && n <= 122 || n >= 65 && n <= 90 || n >= 9 && n <= 96 || n >= 123 && n <= 126)
        {
            cout << "----------------------------------------------------------------------------------------------------------\n\n";
            cout << "\t\t-: Press A To Login As Administrator Or S To Login As Staff :-\n\n";
            cout << "----------------------------------------------------------------------------------------------------------\n";
            phase2();
        }
    }

    void phase2()
    {
        cin >> a;

        switch (a)
        {
        case 65:
            cout << "\n\n----------------------------------------------------------------------------------------------------------";
            cout << "\n\n\t\t\t\t -: Welcome As a Administrator :-";
            cout << "\n\n----------------------------------------------------------------------------------------------------------";
            phase3a();
            phase4();
            phase5();
            break;

        case 83:
            cout << "----------------------------------------------------------------------------------------------------------\n";
            cout << "\n\n\t\t\t\t -: Welcome As a Staff :-";
            cout << "\n\n----------------------------------------------------------------------------------------------------------";
            phase3s();
            phase4();
            phase5();
            break;

        default:
            cout << "\n\t\t\tEnter Valid Input\n\n";
            cout << "\n\n";
        }
    }

    void phase3a()
    {
        cout << "\n\n";
        cout << "Enter The Name Of Administrator           :- ";
        cin >> name;
        cout << "Enter The Account Number Of Administrator :- ";
        cin >> account;
        cout << "Enter The Phone Number Of Administrator   :- ";
        cin >> number;
        cout << "Enter The Email Address Of Administrator  :- ";
        cin >> email;
        cout << "\n\n";
    }

    void phase3s()
    {
        cout << "\n\n";
        cout << "Enter The Name Of Staff           :- ";
        cin >> name;
        cout << "Enter The Account Number Of Staff :- ";
        cin >> account;
        cout << "Enter The Phone Number Of Staff   :- ";
        cin >> number;
        cout << "Enter The Email Address Of Staff  :- ";
        cin >> email;
        cout << "\n\n";
    }

    void phase4()
    {
        cout << "\n\n----------------------------------------------------------------------------------------------------------\n";
        cout << "Name                :- " << name << endl;
        cout << "Account No          :- " << account << endl;
        cout << "Phone No            :- " << number << endl;
        cout << "Email               :- " << email << endl;
        cout << "----------------------------------------------------------------------------------------------------------\n";
    }

    void phase5()
    {
        cout << "\t\t\tPress [1] To Deposite Money :- " << endl;
        cout << "\t\t\tPress [2] To Transfer Money :- " << endl;
        cout << "\t\t\tPress [3] To Withdraw Money :- " << endl;

        cin >> x;

        switch (x)
        {
        case 1:
            cout << "----------------------------------------------------------------------------------------------------------\n";
            cout << "\t\t\tEnter Deposite Value    :- ";
            cin >> dep;
            cout << "\n----------------------------------------------------------------------------------------------------------\n";
            cout << "\t\t\tYour Actual Ammount is  :- " << def << endl;
            cout << "\t\t\tYour Account Balence is :- " << def + dep << endl;
            break;

        case 2:
            cout << "\n----------------------------------------------------------------------------------------------------------\n";
            cout << "\t\t\tEnter Transfer Value    :- ";
            cin >> with;
            cout << "\n----------------------------------------------------------------------------------------------------------\n";
            cout << "\t\t\tYour Actual Balence is  :- " << def << endl;

            if (with <= 200000)
            {
                cout << "\t\t\tYour Account Balence is :- " << def - with << endl;
            }
            else
            {
                cout << "\t\t\tYou Cant Enter Money More Than Account Balence !!";
            }
            break;

        case 3:
            cout << "\n----------------------------------------------------------------------------------------------------------\n";
            cout << "\t\t\tEnter Withdraw Value    :- ";
            cin >> with;
            cout << "\n----------------------------------------------------------------------------------------------------------\n";
            cout << "\t\t\tYour Actual Balence is  :- " << def << endl;

            if (with <= 200000)
            {
                cout << "\t\t\tYour Account Balence is :- " << def - with << endl;
            }
            else
            {
                cout << "\t\t\tYou Cant Enter Money More Than Account Balence !!";
            }

            default :
            cout << "\t\t\tPlease Enter Valid Input ";
        }
    }
};

int main()
{
    Bank b1;
    b1.phase1();
}
