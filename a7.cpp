#include <iostream>
using namespace std;
int main()
{
 int un, ts = 0;

 cout << "Input positive number: ";
 cin >> un;
 while(un <= 0)
{
 cout << "Problem, positive numbers accepted\n";
 cout <<"Do it again:";
 cin >> un;
}
 for(int num = 1; num <= un; num++)
 {
 ts += num;
 }
 cout << "The sum of the numbers from 1 to ";
 cout << un << " equals " << ts <<endl;
 return 0;
 }
