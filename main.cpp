/* 
 * BAI (Basic And Interactive) Engine for In-Line Text-Based Experiences
 * Designed for 'The House' Interactive Narrative Project
 * Group 6, DD0000, NTU ADM Y1S2
 * for macOS ONLY
 * by: Bai Jian Qing
 */

#include <iostream>
#include <string>
#include "movement.h"
#include "clearconsole.h"

using namespace std;

int titlescreen();
int tandc();
int pre_1();
int pre_2();

int main()
{
    // Set terminal dimensions for macOS
    cout << "\e[8;40;100t";
    clearconsole();
    
    titlescreen();
    tandc();
    pre_1();
    pre_2();
    movement();

    
    exit(0);
}

int pre_1()
{
    {
        cout
        << " \t\033[107m\033[1m\033[30m                                                                                        \033[0m\n"
        << " \t\033[107m\033[1m\033[30m Dear diary,                                                                            \033[0m\n"
        << " \t\033[107m\033[1m\033[30m                                                                                        \033[0m\n"
        << " \t\033[107m\033[1m\033[30m Sister Elizabeth took sides with him again. She always does.                           \033[0m\n"
        << " \t\033[107m\033[1m\033[30m Just because he came into the orphanage earlier,                                       \033[0m\n"
        << " \t\033[107m\033[1m\033[30m Sister Elizabeth would always listen to his lies. I've had it. It's been 10 years,     \033[0m\n"
        << " \t\033[107m\033[1m\033[30m I can no longer bear it. I am going to escape from this hellhole,                      \033[0m\n"
        << " \t\033[107m\033[1m\033[30m and find a new home on my own.                                                         \033[0m\n"
        << " \t\033[107m\033[1m\033[30m I no longer want to live here with Sister Elizabeth and the liar. I won't.             \033[0m\n"
        << " \t\033[107m\033[1m\033[30m                                                                                        \033[0m\n"
        << " \t\033[107m\033[1m\033[30m Franklin                                                                               \033[0m\n"
        << " \t\033[107m\033[1m\033[30m                                                                                        \n\033[0m"
        << " \t\033[107m\033[1m\033[30m                                                                                        \n\033[0m"
        << " \t\033[107m\033[1m\033[31m                                Please enter 1 to continue                              \n\033[0m"
        << " \t\033[107m\033[1m\033[30m                                                                                        \n\033[0m"
        << " \t\033[107m\033[1m\033[30m                                                                                        \033[0m"
        << endl;
        
        unsigned int user_input_1 = 0;
        
        cout << "\n \t\t\033[31;1mINPUT >> \033[0m";
        cin >> user_input_1;
        
        clearconsole();
        
        while(user_input_1 != 1 || cin.fail())
        {
            cin.clear();
            cin.ignore(32767,'\n');
            clearconsole();
            
            cout
            << "\n\n\n\n\n"
            << " \t\t\033[107m\033[1m\033[30m                                                                   \n\033[0m"
            << " \t\t\033[107m\033[1m\033[31m                 Please enter the valid number (1)                 \n\033[0m"
            << " \t\t\033[107m\033[1m\033[30m                                                                   \033[0m"
            << endl;
            
            cout << "\n \t\t\033[31;1mINPUT >> \033[0m";
            cin >> user_input_1;
        }
        
        cout << "\n";
        
        return 0;
    }
    return 0;
}

int pre_2()
{
    {
        cout
        << " \t\033[107m\033[1m\033[30m                                                                                        \033[0m\n"
        << " \t\033[107m\033[1m\033[30m It was the year 1937.                                                                  \033[0m\n"
        << " \t\033[107m\033[1m\033[30m                                                                                        \033[0m\n"
        << " \t\033[107m\033[1m\033[30m Indignance and frustration; those were the feelings that Franklin felt,                \033[0m\n"
        << " \t\033[107m\033[1m\033[30m as he cycled through the streets of the suburbs on a rainy late afternoon.             \033[0m\n"
        << " \t\033[107m\033[1m\033[30m The young teenage boy had long lost count of the streets and neighbourhoods            \033[0m\n"
        << " \t\033[107m\033[1m\033[30m that had passed, and was determined to go anywhere but the place he had called home    \033[0m\n"
        << " \t\033[107m\033[1m\033[30m for the last 10 years. The place was unbearable with Sister Elizabeth’s favouritism.   \033[0m\n"
        << " \t\033[107m\033[1m\033[30m                                                                                        \n\033[0m"
        << " \t\033[107m\033[1m\033[30m As the downpour started to get heavier and it gets increasingly difficult to see       \033[0m\n"
        << " \t\033[107m\033[1m\033[30m in the rain, Franklin cycles past a gate unknowingly and seeks shelter underneath the  \033[0m\n"
        << " \t\033[107m\033[1m\033[30m sparse canopy of a tree. He eventually looks up, and sees a grand mansion that seemed  \033[0m\n"
        << " \t\033[107m\033[1m\033[30m to have been abandoned and neglected for years. The mansion promised shelter and warmth\033[0m\n"
        << " \t\033[107m\033[1m\033[30m from the downpour, and the open doors seemed to be beckoning him to enter...           \033[0m\n"
        << " \t\033[107m\033[1m\033[30m                                                                                        \n\033[0m"
        << " \t\033[107m\033[1m\033[30m                                                                                        \n\033[0m"
        << " \t\033[107m\033[1m\033[31m                                Please enter 1 to continue                              \n\033[0m"
        << " \t\033[107m\033[1m\033[30m                                                                                        \n\033[0m"
        << " \t\033[107m\033[1m\033[30m                                                                                        \033[0m"
        << endl;
        
        unsigned int user_input_1 = 0;
        
        cout << "\n \t\t\033[31;1mINPUT >> \033[0m";
        cin >> user_input_1;
        
        clearconsole();
        
        while(user_input_1 != 1 || cin.fail())
        {
            cin.clear();
            cin.ignore(32767,'\n');
            clearconsole();
            
            cout
            << "\n\n\n\n\n"
            << " \t\t\033[107m\033[1m\033[30m                                                                   \n\033[0m"
            << " \t\t\033[107m\033[1m\033[31m                 Please enter the valid number (1)                 \n\033[0m"
            << " \t\t\033[107m\033[1m\033[30m                                                                   \033[0m"
            << endl;
            
            cout << "\n \t\t\033[31;1mINPUT >> \033[0m";
            cin >> user_input_1;
        }
        
        cout << "\n";
        
        return 0;
    }
    return 0;
}

int titlescreen()
{
    cout
    << "\n\n\n\n\n\n\n\n\n\n"
    << " \t\t\033[107m\033[1m\033[30m                                                                   \n\033[0m"
    << " \t\t\033[107m\033[1m\033[30m                                                                   \n\033[0m"
    << " \t\t\033[107m\033[1m\033[30m                                                                   \n\033[0m"
    << " \t\t\033[107m\033[1m\033[30m                                                                   \n\033[0m"
    << " \t\t\033[107m\033[1m\033[31m     _____  _   _  _____   _   _  _____  _   _  _____  _____       \n\033[0m"
    << " \t\t\033[107m\033[1m\033[31m    |_   _|| | | ||  ___| | | | ||  _  || | | |/  ___||  ___|      \n\033[0m"
    << " \t\t\033[107m\033[1m\033[31m      | |  | |_| || |__   | |_| || | | || | | || `--. | |__        \n\033[0m"
    << " \t\t\033[107m\033[1m\033[31m      | |  |  _  ||  __|  |  _  || | | || | | | `--. ||  __|       \n\033[0m"
    << " \t\t\033[107m\033[1m\033[31m      | |  | | | || |___  | | | || |_/ /| |_| |/|__/ /| |___       \n\033[0m"
    << " \t\t\033[107m\033[1m\033[31m      |_/  |_| |_/|____/  |_| |_/ |___/  |___/ |____/ |____/       \n\033[0m"
    << " \t\t\033[107m\033[1m\033[30m                                                                   \n\033[0m"
    << " \t\t\033[107m\033[1m\033[30m                                                                   \n\033[0m"
    << " \t\t\033[107m\033[1m\033[30m                                                                   \n\033[0m"
    << " \t\t\033[107m\033[1m\033[31m                      Please enter 1 to start                      \n\033[0m"
    << " \t\t\033[107m\033[1m\033[30m                                                                   \n\033[0m"
    << " \t\t\033[107m\033[1m\033[30m                                                                   \n\033[0m"
    << " \t\t\033[107m\033[1m\033[30m                                                                   \n\033[0m"
    << " \t\t\033[107m\033[1m\033[30m                                                                   \033[0m"
    << endl;
    
    unsigned int user_input_1 = 0;
    
    cout << "\n \t\t\033[31;1mINPUT >> \033[0m";
    cin >> user_input_1;
    
    clearconsole();
    
    while(user_input_1 != 1 || cin.fail())
    {
        cin.clear();
        cin.ignore(32767,'\n');
        clearconsole();
        
        cout
        << "\n\n\n\n\n"
        << " \t\t\033[107m\033[1m\033[30m                                                                   \n\033[0m"
        << " \t\t\033[107m\033[1m\033[31m                 Please enter the valid number (1)                 \n\033[0m"
        << " \t\t\033[107m\033[1m\033[30m                                                                   \033[0m"
        << endl;
        
        cout << "\n \t\t\033[31;1mINPUT >> \033[0m";
        cin >> user_input_1;
    }
    
    cout << "\n";
    
    return 0;
}

int tandc()
{
    clearconsole();
    string consent;
    
    cout
    << "\n\n\n\n\n"
    << " \t\t\033[107m\033[1m\033[30m                                                                   \n\033[0m"
    << " \t\t\033[107m\033[1m\033[30m Basic Instructions:                                               \n\033[0m"
    << " \t\t\033[107m\033[1m\033[30m All standard input options will have a number in front of it      \n\033[0m"
    << " \t\t\033[107m\033[1m\033[30m Please type the corresponding number and press enter as an input  \n\033[0m"
    << " \t\t\033[107m\033[1m\033[30m Enjoy!                                                            \n\033[0m"
    << " \t\t\033[107m\033[1m\033[30m                                                                   \033[0m"
    << endl;
    
    cout
    << " \t\t\033[107m\033[1m\033[30m                                                                   \n\033[0m"
    << " \t\t\033[107m\033[1m\033[30m Terms and Conditions:                                             \n\033[0m"
    << " \t\t\033[107m\033[1m\033[30m Group 6's Project                                                 \n\033[0m"
    << " \t\t\033[107m\033[1m\033[30m Bai coded this                                                    \n\033[0m"
    << " \t\t\033[107m\033[1m\033[30m Yeah that's all                                                   \n\033[0m"
    << " \t\t\033[107m\033[1m\033[30m Just acknowledge that and play lol                                \n\033[0m"
    << " \t\t\033[107m\033[1m\033[30m                                                                   \033[0m"
    << endl;
    
    cin.clear();
    cin.ignore(32767,'\n');
    
    while(!(consent == "Agree" || consent == "agree" || consent == "AGREE"))
    {
        cout
        << "\n\n\n"
        << " \t\t\033[107m\033[1m\033[30m                                                                   \n\033[0m"
        << " \t\t\033[107m\033[1m\033[31m   Please type 'Agree' if you agree to the terms as stated above.  \n\033[0m"
        << " \t\t\033[107m\033[1m\033[31m                  You have no choice anyway.                       \n\033[0m"
        << " \t\t\033[107m\033[1m\033[30m                                                                   \033[0m"
        << endl;
        
        cout << "\n \t\t\033[31;1mINPUT >> \033[0m";
        getline(cin, consent);
        
        clearconsole();
    }
    
    return 0;
}
