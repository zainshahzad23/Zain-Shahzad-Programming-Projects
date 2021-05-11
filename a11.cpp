#include <iostream>
using namespace std;
int main() {
/*int anumbers[10], bi, sm;
for (int i = 0; i < 10; i++) {
cout << "Enter a value for array " << i << " : ";
cin >> anumbers[i];
}
bi = anumbers[0];
sm = anumbers[0];
for (int i = 0; i < 10; i++) {
if (bi < anumbers[i])
bi = anumbers[i];
if (sm > anumbers[i])
sm = anumbers[i];
}
cout << "The biggest number entered is " << bi << " and the most little
number is " << sm << ".\n";
*/
int x = 1, y = 1, z = 1; y = y + z;
x = x + y;
cout << "result = " << (x < y ? y : x) << endl;
system("pause");
return 0;
}
