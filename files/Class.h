#include <iostream>
#include <cstdlib>
#include <stack>
using namespace std;

class Airline
{
private:
    int totalFlights,
        totalUKFlights,
        totalJPNFlights,
        totalChinaFlights,
        totalDubaiFlights,
        accountMoney =0;

public:
    Airline();
    void initializtion();
    void admin();
    void costumer();
    void displayData();
    void UK();
    void JPN();
    void China();
    void Dubai();
    void AccountMoney();
};
