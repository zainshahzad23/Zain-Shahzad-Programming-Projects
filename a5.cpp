#include <iostream>
int main ()
 
{
    double seconds, minutes, hours, days;
    
    if (seconds >= 60)
        minutes = (seconds / 60);
        std::cout<<"There are this many minutes"<<minutes<<"In that many seconds./n";
    else if (seconds >= 3600)
        hours = (seconds / 3600);
        std::cout<<"There are this many hours"<<hours<<"In that many seconds./n";
    else if (seconds >= 86,400)
        days = (seconds / 86,400);
        std::cout<<"There are this many days"<<hours<<"In that many seconds./n";
    return 0;
    
}

