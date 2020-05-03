#include <ctime>

using namespace std;

unsigned long prng(int upper_limit)
{
    time_t current_time;
    
    unsigned static int seed = static_cast<int>(time(&current_time));
    
    seed = seed * 179425063 + 7907;
    
    return seed % upper_limit;    // Sets upper limit for return value
}

