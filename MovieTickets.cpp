#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main()
{
    const double percentage_kept = 0.2;
    const double adult_price = 6.0;
    const double child_price = 3.0;
    string movie;
    double grossprofit;
    double netprofit;
    double distributor;
    int child;
    int adult;
    cout<<"What is the movie's name? ";
    getline(cin, movie);
    cout<<"How many adult tickets were sold?";
    cin>>adult;
    cout<<"How many child tickets were sold?";
    cin>>child;
    grossprofit = (adult * adult_price) + (child * child_price);
    netprofit = (grossprofit * percentage_kept);
    distributor = (grossprofit - netprofit);
    cout << "\nRevenue Report\n"
         << "==============\n"
         << "Movie Name:                  "
         << "\"" << movie << "\"" << endl
         << "Adult Tickets Sold:          "
         << setw(5) << adult << endl
         << "Child Tickets Sold:          "
         << setw(5)   << child << endl
         << fixed << showpoint << setprecision(2)
         << "Gross Box Office Profit:    $"
         << setw(5)   << grossprofit << endl
         << "Net Box Office Profit:      $"
         << setw(5) << netprofit   << endl
         << "Amount Paid to Distributor: $"
         << setw(5)   << distributor << endl;
    return 0;
}

    

