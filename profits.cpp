// When inputting a number greater than 999, do not include commas
#include<iostream>
using namespace std;
int main()
{
    int amount;
    int percentage;
    cout<<"enter total money generated : ";
    cin>>amount;
    percentage = (amount/100)*62;
    cout<<"East Coast Sales: "<<percentage<<endl;
    return 0;
}
