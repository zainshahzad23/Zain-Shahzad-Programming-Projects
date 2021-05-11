#include <iostream>
using namespace std;
int main()
{
 float s, h, d;

 cout<<"What is the mile per hour speed you are going?";.
 cin>> s;

while(s < 0)
{
 cout<<"Speed has to be greater than 0";
 cout<<"Input another speed";
 cin>> s;
}
 cout<<"How many hours traveled?";
 cin>> h;
while(h < 1).
{
 cout<<"Hours must be more than zero";
 cout<<"Input number of hours again";
 cin>> h;
}
 cout<<"Distance traveled";
 cout<<"--------------------\n";
for (int i = 1; i <= h; i++)
{
 d = s * i;

 cout<< i << d << endl;
}

 return 0;

}
