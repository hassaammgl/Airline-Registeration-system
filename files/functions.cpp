#include "Class.h"
// all data
void Airline::displayData()
{
    cout << "Your total flights are : " << totalFlights << endl
         << "Total flights of China are: " << totalChinaFlights << endl
         << "Total flights of UK are: " << totalUKFlights << endl
         << "Total flights of JPN are: " << totalJPNFlights << endl
         << "Total flights of Dubai are: " << totalDubaiFlights << endl;
}

// Authenticator
bool authAdmin()
{
    int choice;
    int tries = 0;
    string userName, password;
    cout << "Are you a Admin or not" << endl
         << "1) Yes" << endl
         << "2) No" << endl;
    cin >> choice;
    if (choice == 1)
    {
    a:
    {

        cout << "Enter Username" << endl;
        cin >> userName;
        cout << "Enter Password" << endl;
        cin >> password;
        if (userName == "Admin" && password == "boss")
        {
            return true;
        }
        else
        {
            ++tries;
            cout << tries << endl;
            cout << "Wrong credentials" << endl
                 << "try Again" << endl;
            if (tries == 2)
            {
                cout << "You try 2 times you are not admin get out" << endl;
                exit(1);
            }
            goto a;
        }
    }
    }
    else
    {
        return false;
    }
}
////////////////////////// Constructer /////////////////////////
Airline::Airline()
{
    cout << "///////////////////////////   Welcome to   /////////////////////////////" << endl;
    cout << "///////////////////////////Hassaam Airlines/////////////////////////////" << endl;
}

////////////////////////// initializtion /////////////////////////
void Airline::initializtion()
{
    switch (authAdmin())
    {
    case true:
        admin();
        break;
    case false:
        costumer();
        break;
    }
}

////////////////////////// Admin /////////////////////////
void Airline::admin()
{
    cout << "Admin" << endl;
    cout << "Enter total flights of UK" << endl;
    cin >> totalUKFlights;
    cout << "Enter total flights of JPN" << endl;
    cin >> totalJPNFlights;
    cout << "Enter total flights China" << endl;
    cin >> totalChinaFlights;
    cout << "Enter total flights Dubai" << endl;
    cin >> totalDubaiFlights;
    totalFlights = totalChinaFlights + totalDubaiFlights + totalJPNFlights + totalUKFlights;
    displayData();
    cout << endl;
    AccountMoney();
    costumer();
}

////////////////////////// Costumer /////////////////////////
void Airline::costumer()
{
    int country;
    while (true)
    {
        cout << "In which country you want to go..." << endl
             << "1) China" << endl
             << "2) Dubai" << endl
             << "3) UK" << endl
             << "4) JPN" << endl
             << "5) Exit" << endl;
        cin >> country;
        switch (country)
        {
        case 1:
            China();
            break;
        case 2:
            Dubai();
            break;
        case 3:
            UK();
            break;
        case 4:
            JPN();
            break;
        case 5:
            exit(1);
            break;
        default:
            cout << "Invalid choice\n Try again" << endl;
            break;
        }
    }
}

////////////////////////// China /////////////////////////
void Airline::China()
{
    int choice, price = 345;
    cout << "China" << endl;
    --totalChinaFlights;
    --totalFlights;
    cout << "Your flight fee: $" << price << endl
         << "1) OK" << endl
         << "2) No" << endl;
    cin >> choice;
    if (choice == 1)
    {
        cout << "Thanks Here is your flights ticket number " << rand() << endl;
        accountMoney += price;
        AccountMoney();
        displayData();
    }
    else
    {
        cout << "We are sorry your flight is not registered,\nbecause you have not enough money" << endl;
    }
}

////////////////////////// UK /////////////////////////
void Airline::UK()
{
    int choice, price = 555;
    cout << "UK" << endl;
    --totalUKFlights;
    --totalFlights;
    cout << "Your flight fee: $" << price << endl
         << "1) OK" << endl
         << "2) No" << endl;
    cin >> choice;
    if (choice == 1)
    {
        cout << "Thanks Here is your flights ticket number " << rand() << endl;
        accountMoney += price;
        AccountMoney();
        displayData();
    }
    else
    {
        cout << "We are sorry your flight is not registered,\nbecause you have not enough money" << endl;
    }
}

////////////////////////// JPn /////////////////////////
void Airline::JPN()
{
    int choice, price = 745;
    cout << "JPN" << endl;
    --totalJPNFlights;
    --totalFlights;
    cout << "Your flight fee: $" << price << endl
         << "1) OK" << endl
         << "2) No" << endl;
    cin >> choice;
    if (choice == 1)
    {
        cout << "Thanks Here is your flights ticket number " << rand() << endl;
        accountMoney += price;
        AccountMoney();
        displayData();
    }
    else
    {
        cout << "We are sorry your flight is not registered,\nbecause you have not enough money" << endl;
    }
}

////////////////////////// Dubai /////////////////////////
void Airline::Dubai()
{
    int choice, price = 745;
    cout << "Dubai" << endl;
    --totalDubaiFlights;
    --totalFlights;
    cout << "Your flight fee: $" << price << endl
         << "1) OK" << endl
         << "2) No" << endl;
    cin >> choice;
    if (choice == 1)
    {
        cout << "Thanks Here is your flights ticket number " << rand() << endl;
        accountMoney += price;
        AccountMoney();
        displayData();
    }
    else
    {
        cout << "We are sorry your flight is not registered,\nbecause you have not enough money" << endl;
    }
}

////////////////////////// account details /////////////////////////
void Airline::AccountMoney()
{
    cout << "Your Account Money is: $" << accountMoney << endl;
}