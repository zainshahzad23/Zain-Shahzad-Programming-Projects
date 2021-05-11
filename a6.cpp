#include <iostream>
#include <iomanip>
using namespace std;
 
int main()
{
    const double extracharge =  15,
                 tencents    = .10,
                 eightcents  = .08,
                 sixcents    = .06,
                 fourcents   = .04;
 
    double beginning,
           totalcharges = 10;
 
    int numberchecks;
 
    cout << "Enter Beginning Balance: $";
    cin >> beginning;
 
    if (beginning < 0)
        cout << "Warning your account has been overdrawn.";
 
    if (beginning < 400)
        totalcharges += extracharge;
 
    cout << "\nHow many checks written? ";
    cin >> numberchecks;
    if (numberchecks < 0)
       {
           cout << "Error. "
                << "Number of checks written must be\n"
                << "Greater than or equal to 0.\n";
  
 



 

