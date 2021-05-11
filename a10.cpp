#include <iostream>
using namespace std;
int main()
{
 int s1, s2, s3, s4, s5;
 cout<<"What are day 1 sales?: ";
 cin>>s1;
 cout<<"What are day 2 sales?: ";
 cin>>s2;
 cout<<"What are day 3 sales?: ";
 cin>>s3;
 cout<<"What are day 4 sales?: ";
 cin>>s4;
 cout<<"What are day 5 sales?: ";
 cin>>s5;

 cout<<"=============================\n";

 cout<<"Bar Chart for Sales";
 cout<<"All * = $100\n";
 cout<<"S1: ";
 for(int i=0;i<(s1/100);i++)
 {
 cout<<"*";

}
 cout<<std::endl;

 cout<<"s2: ";
 for(int i=0;i<(s2/100);i++)
{
 cout<<"*";
}
 cout<<std::endl;

 cout<<"s3: ";
 for(int i=0;i<(s3/100);i++)
{
 cout<<"*";
}
 cout<<std::endl;

 cout<<"s4: ";
 for(int i=0;i<(s4/100);i++)
{
 cout<<"*";
}
 cout<<std::endl;

 cout<<"s5: ";
 for(int i=0;i<(s5/100);i++)
{
 cout<<"*";
}
 cout<<std::endl;

 return 0;
}
