#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
 const int qn = 12;

 int y, tqn = 0;

 double rf, trf = 0.0, af;

 cout<<"How many years: ";
 cin>> y;

 while (y < 0)
again
{
 cout<<"Must have more than no years";
 cout<<"Input number of years again ";
 cin>> y;
}
 for(int i = 0; i < y; i++)
{

 cout<< "Year "<< (i +1) << endl;

 for(int a = 0; a < qn; a++)
{
 cout<<"How many inches of rainfall for month "<< (a + 1)<<"? ";
 cin>> rf;
 while (rf < 0)
{
 cout<< "Enter a postive number! ";
 cin>> rf;
}
 //Do the Math
 trf += rf;
 tqn++;
}
}
 af = trf/tqn;
 cout << setprecision(3) << fixed;
 cout << "Total months : "<<tqn<< endl;
 cout << "Inches or rainfall : "<< trf << endl;
 cout << "Average rainfall every month : "<< af << endl;

 return 0;
}
