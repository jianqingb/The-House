#include <iostream>

using namespace std;

int clearconsole()
{
    cout << "\033[2J\033[1;1H";
    
    return 0;
}
