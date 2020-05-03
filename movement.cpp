#include <iostream>
#include <string>
#include <vector>
#include "textdb.h"
#include "optiondb.h"
#include "prng.h"
#include "unistd.h"
#include "clearconsole.h"

using namespace std;

struct dataReturn
{
    int input = 99;
    int i = 99;
};

dataReturn output;

int running = 1;
int room_state_check_firstFloor(int i);

vector<int> room_state_firstFloor = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

vector<int> puzzle_state = {0,0,0,0,0,0,0,0,0}; // [0] = 1st puzzle piece etc.
vector<int> inventory_state = {0,0}; // cloth, key

dataReturn scenario_0() // main entrance
{
    output.i = 0;
    
    room_state_check_firstFloor(output.i);
    text(output.i);
    option(output.i);
    cout << "\n \t\033[31;1mINPUT >> \033[0m";
    cin >> output.input;
    
    room_state_firstFloor[output.i] = 1;
   
    return output;
}

dataReturn scenario_1() // close-up of entrance door
{
    output.i = 1;
    
    room_state_check_firstFloor(output.i);
    text(output.i);
    option(output.i);
    
    cout << "\n \t\033[31;1mINPUT >> \033[0m";
    cin >> output.input;
    
    room_state_firstFloor[output.i] = 1;
    
    return output;
}

dataReturn scenario_2() // level 1 central hall
{
    output.i = 2;
    
    
    
    text(output.i);
    option(output.i);
    
    cout << "\n \t\033[31;1mINPUT >> \033[0m";
    cin >> output.input;
    
    room_state_firstFloor[output.i] = 1;
    
    return output;
}

dataReturn scenario_2_1() // level 1 left hallway
{
    output.i = 3;
    
    
    
    text(output.i);
    option(output.i);
    
    cout << "\n \t\033[31;1mINPUT >> \033[0m";
    cin >> output.input;
    
    room_state_firstFloor[output.i] = 1;
    
    return output;
}

dataReturn scenario_2_1_1() // level 1 living room
{
    output.i = 4;
    
    
    
    room_state_check_firstFloor(output.i);
    text(output.i);
    option(output.i);
    
    cout << "\n \t\033[31;1mINPUT >> \033[0m";
    cin >> output.input;
    
    room_state_firstFloor[output.i] = 1;
    
    return output;
}

dataReturn scenario_2_1_1_1() // :FAMILY PORTRAIT
{
    output.i = 5;
    
    
    
    text(output.i);
    option(output.i);
    
    cout << "\n \t\033[31;1mINPUT >> \033[0m";
    cin >> output.input;
    
    room_state_firstFloor[output.i] = 1;
    
    return output;
}

dataReturn scenario_2_1_1_1_inv() // :FAMILY PORTRAIT
{
    output.i = 5;
    
    
    
    text(output.i);
    option(-15);
    
    cout << "\n \t\033[31;1mINPUT >> \033[0m";
    cin >> output.input;
    
    room_state_firstFloor[output.i] = 1;
    
    return output;
}

dataReturn scenario_2_1_1_2() // :TV
{
    output.i = 6;
    
    
    
    text(output.i);
    option(output.i);
    
    cout << "\n \t\033[31;1mINPUT >> \033[0m";
    cin >> output.input;
    
    room_state_firstFloor[output.i] = 1;
    
    return output;
}

dataReturn scenario_2_1_2() // level 1 ballroom
{
    output.i = 7;
    
    
    
    room_state_check_firstFloor(output.i);
    text(output.i);
    option(output.i);
    
    cout << "\n \t\033[31;1mINPUT >> \033[0m";
    cin >> output.input;
    
    room_state_firstFloor[output.i] = 1;
    
    return output;
}

dataReturn scenario_2_1_2_pp() // :PUZZLE 1
{
    output.i = -2;
    
    
    
    text(output.i);
    option(output.i);
    
    
    cout << "\n \t\033[31;1mINPUT >> \033[0m";
    cin >> output.input;
    
    room_state_firstFloor[output.i] = 1;
    
    return output;
}

dataReturn scenario_2_1_3() // level 1 lounge
{
    output.i = 9;
    
    
    
    room_state_check_firstFloor(output.i);
    text(output.i);
    option(output.i);
    
    cout << "\n \t\033[31;1mINPUT >> \033[0m";
    cin >> output.input;
    
    room_state_firstFloor[output.i] = 1;
    
    return output;
}

dataReturn scenario_2_1_3_1() // :BOOKSHELF
{
    output.i = 10;
    
    
    
    text(output.i);
    option(output.i);
    
    cout << "\n \t\033[31;1mINPUT >> \033[0m";
    cin >> output.input;
    
    room_state_firstFloor[output.i] = 1;
    
    return output;
}

dataReturn scenario_2_1_3_2() // :SOFA
{
    output.i = 11;
    
    
    
    text(output.i);
    option(output.i);
    
    cout << "\n \t\033[31;1mINPUT >> \033[0m";
    cin >> output.input;
    
    room_state_firstFloor[output.i] = 1;
    
    return output;
}

dataReturn scenario_2_1_3_2_pp() // :PUZZLE 2
{
    output.i = -5;
    
    
    
    text(output.i);
    option(output.i);
    
    cout << "\n \t\033[31;1mINPUT >> \033[0m";
    cin >> output.input;
    
    room_state_firstFloor[output.i] = 1;
    
    return output;
}

dataReturn scenario_2_2() // level 1 right hallway
{
    output.i = 12;
    
    
    
    text(output.i);
    option(output.i);
    
    cout << "\n \t\033[31;1mINPUT >> \033[0m";
    cin >> output.input;
    
    room_state_firstFloor[output.i] = 1;
    
    return output;
}

dataReturn scenario_2_2_1() // :level 1 kitchen
{
    output.i = 13;
    
    
    
    room_state_check_firstFloor(output.i);
    text(output.i);
    option(output.i);
    
    cout << "\n \t\033[31;1mINPUT >> \033[0m";
    cin >> output.input;
    
    room_state_firstFloor[output.i] = 1;
    
    return output;
}

dataReturn scenario_2_2_1_1() // :DISHWASHER
{
    output.i = 14;
    
    
    
    text(output.i);
    option(output.i);
    
    cout << "\n \t\033[31;1mINPUT >> \033[0m";
    cin >> output.input;
    
    room_state_firstFloor[output.i] = 1;
    
    return output;
}

dataReturn scenario_2_2_1_1_inv() // :CLOTH
{
    output.i = -8;
    
    
    
    text(output.i);
    option(output.i);
    
    cout << "\n \t\033[31;1mINPUT >> \033[0m";
    cin >> output.input;
    
    room_state_firstFloor[output.i] = 1;
    
    return output;
}

dataReturn scenario_2_2_1_2() // :FRIDGE
{
    output.i = 15;
    
    
    
    text(output.i);
    option(output.i);
    
    cout << "\n \t\033[31;1mINPUT >> \033[0m";
    cin >> output.input;
    
    room_state_firstFloor[output.i] = 1;
    
    return output;
}

dataReturn scenario_2_2_3() // :level 1 greenhouse
{
    output.i = 16;
    
    
    
    room_state_check_firstFloor(output.i);
    text(output.i);
    option(output.i);
    
    cout << "\n \t\033[31;1mINPUT >> \033[0m";
    cin >> output.input;
    
    room_state_firstFloor[output.i] = 1;
    
    return output;
}

dataReturn scenario_2_2_3_1() // :POTS
{
    output.i = 17;
    
    
    
    text(output.i);
    option(output.i);
    
    cout << "\n \t\033[31;1mINPUT >> \033[0m";
    cin >> output.input;
    
    room_state_firstFloor[output.i] = 1;
    
    return output;
}

dataReturn scenario_2_2_3_1_inv() // :KEYS
{
    output.i = -10;
    
    
    
    text(output.i);
    option(output.i);
    
    cout << "\n \t\033[31;1mINPUT >> \033[0m";
    cin >> output.input;
    
    room_state_firstFloor[output.i] = 1;
    
    return output;
}

dataReturn scenario_2_2_2() // :level 1 dining room
{
    output.i = 18;
    
    
    
    room_state_check_firstFloor(output.i);
    text(output.i);
    option(output.i);
    
    cout << "\n \t\033[31;1mINPUT >> \033[0m";
    cin >> output.input;
    
    room_state_firstFloor[output.i] = 1;
    
    return output;
}

dataReturn scenario_2_2_2_1() // :SEAT
{
    output.i = 19;
    
    
    
    text(output.i);
    option(output.i);
    
    cout << "\n \t\033[31;1mINPUT >> \033[0m";
    cin >> output.input;
    
    room_state_firstFloor[output.i] = 1;
    
    return output;
}

dataReturn scenario_2_2_2_1_pp() // :PUZZLE 3
{
    output.i = -12;
    
    
    
    text(output.i);
    option(output.i);
    
    cout << "\n \t\033[31;1mINPUT >> \033[0m";
    cin >> output.input;
    
    room_state_firstFloor[output.i] = 1;
    
    return output;
}

dataReturn scenario_2_2_2_2() // :WALL
{
    output.i = 20;
    
    
    
    text(output.i);
    option(output.i);
    
    cout << "\n \t\033[31;1mINPUT >> \033[0m";
    cin >> output.input;
    
    room_state_firstFloor[output.i] = 1;
    
    return output;
}

dataReturn scenario_2_2_2_3() // :WINDOW
{
    output.i = 21;
    
    
    
    text(output.i);
    option(output.i);
    
    cout << "\n \t\033[31;1mINPUT >> \033[0m";
    cin >> output.input;
    
    room_state_firstFloor[output.i] = 1;
    
    return output;
}

dataReturn scenario_2_3() // :NOT ENOUGH PUZZLE
{
    output.i = 98;
    text(output.i);
    usleep(3000000);
    
    return output;
}

dataReturn scenario_3() // level 2 central hall
{
    output.i = 22;
    
    
    
    text(output.i);
    option(output.i);
    
    cout << "\n \t\033[31;1mINPUT >> \033[0m";
    cin >> output.input;
    
    room_state_firstFloor[output.i] = 1;
    
    return output;
}

dataReturn scenario_3_1() // level 2 left hallway
{
    output.i = 23;
    
    
    
    text(output.i);
    option(output.i);
    
    cout << "\n \t\033[31;1mINPUT >> \033[0m";
    cin >> output.input;
    
    room_state_firstFloor[output.i] = 1;
    
    return output;
}

dataReturn scenario_3_1_1() // level 2 fred room
{
    output.i = 24;
    
    
    
    room_state_check_firstFloor(output.i);
    text(output.i);
    option(output.i);
    
    cout << "\n \t\033[31;1mINPUT >> \033[0m";
    cin >> output.input;
    
    room_state_firstFloor[output.i] = 1;
    
    return output;
}

dataReturn scenario_3_1_1_1() // :TOY CHEST
{
    output.i = 25;
    
    
    
    text(output.i);
    option(output.i);
    
    cout << "\n \t\033[31;1mINPUT >> \033[0m";
    cin >> output.input;
    
    room_state_firstFloor[output.i] = 1;
    
    return output;
}

dataReturn scenario_3_1_1_2() // :BED
{
    output.i = 26;
    
    
    
    text(output.i);
    option(output.i);
    
    cout << "\n \t\033[31;1mINPUT >> \033[0m";
    cin >> output.input;
    
    room_state_firstFloor[output.i] = 1;
    
    return output;
}

dataReturn scenario_3_1_1_2_1() // :JIB
{
    output.i = 27;
    
    
    
    text(output.i);
    option(output.i);
    
    cout << "\n \t\033[31;1mINPUT >> \033[0m";
    cin >> output.input;
    
    room_state_firstFloor[output.i] = 1;
    
    return output;
}

dataReturn scenario_3_1_1_3() // :WARDROBE
{
    output.i = 28;
    
    
    
    text(output.i);
    option(output.i);
    
    cout << "\n \t\033[31;1mINPUT >> \033[0m";
    cin >> output.input;
    
    room_state_firstFloor[output.i] = 1;
    
    return output;
}

dataReturn scenario_3_1_2() // level 2 frank room
{
    output.i = 29;
    
    
    
    room_state_check_firstFloor(output.i);
    text(output.i);
    option(output.i);
    
    cout << "\n \t\033[31;1mINPUT >> \033[0m";
    cin >> output.input;
    
    room_state_firstFloor[output.i] = 1;
    
    return output;
}

dataReturn scenario_3_1_2_1() // :BED
{
    output.i = 30;
    
    
    
    text(output.i);
    option(output.i);
    
    cout << "\n \t\033[31;1mINPUT >> \033[0m";
    cin >> output.input;
    
    room_state_firstFloor[output.i] = 1;
    
    return output;
}

dataReturn scenario_3_1_2_1_1() // :DIARY
{
    output.i = 31;
    
    
    
    text(output.i);
    option(output.i);
    
    cout << "\n \t\033[31;1mINPUT >> \033[0m";
    cin >> output.input;
    
    room_state_firstFloor[output.i] = 1;
    
    return output;
}

dataReturn scenario_3_1_2_2() // :DESK
{
    output.i = 32;
    
    
    
    text(output.i);
    option(output.i);
    
    cout << "\n \t\033[31;1mINPUT >> \033[0m";
    cin >> output.input;
    
    room_state_firstFloor[output.i] = 1;
    
    return output;
}

dataReturn scenario_3_1_2_3() // :CHEST
{
    output.i = 33;
    
    
    
    text(output.i);
    option(output.i);
    
    cout << "\n \t\033[31;1mINPUT >> \033[0m";
    cin >> output.input;
    
    room_state_firstFloor[output.i] = 1;
    
    return output;
}

dataReturn scenario_3_1_2_4() // :WARDROBE
{
    output.i = 34;
    
    
    
    text(output.i);
    option(output.i);
    
    cout << "\n \t\033[31;1mINPUT >> \033[0m";
    cin >> output.input;
    
    room_state_firstFloor[output.i] = 1;
    
    return output;
}

dataReturn scenario_3_1_3() // level 1 guest room
{
    output.i = 35;
    
    
    
    room_state_check_firstFloor(output.i);
    text(output.i);
    option(output.i);
    
    cout << "\n \t\033[31;1mINPUT >> \033[0m";
    cin >> output.input;
    
    room_state_firstFloor[output.i] = 1;
    
    return output;
}

dataReturn scenario_3_1_3_1() // :BED
{
    output.i = 36;
    
    
    
    text(output.i);
    option(output.i);
    
    cout << "\n \t\033[31;1mINPUT >> \033[0m";
    cin >> output.input;
    
    room_state_firstFloor[output.i] = 1;
    
    return output;
}

dataReturn scenario_3_1_3_1_pp() // :PUZZLE 3&9
{
    output.i = -16;
    
    
    
    text(output.i);
    option(output.i);
    
    cout << "\n \t\033[31;1mINPUT >> \033[0m";
    cin >> output.input;
    
    room_state_firstFloor[output.i] = 1;
    
    return output;
}

dataReturn scenario_3_1_3_2() // :WARDROBE
{
    output.i = 37;
    
    
    
    text(output.i);
    option(output.i);
    
    cout << "\n \t\033[31;1mINPUT >> \033[0m";
    cin >> output.input;
    
    room_state_firstFloor[output.i] = 1;
    
    return output;
}

dataReturn scenario_3_2() // level 2 right hallway
{
    output.i = 38;
    
    
    
    text(output.i);
    option(output.i);
    
    cout << "\n \t\033[31;1mINPUT >> \033[0m";
    cin >> output.input;
    
    room_state_firstFloor[output.i] = 1;
    
    return output;
}

dataReturn scenario_3_2_1() // level 2 parent room
{
    output.i = 39;
    
    
    
    room_state_check_firstFloor(output.i);
    text(output.i);
    option(output.i);
    
    cout << "\n \t\033[31;1mINPUT >> \033[0m";
    cin >> output.input;
    
    room_state_firstFloor[output.i] = 1;
    
    return output;
}

dataReturn scenario_3_2_1_1() // :BEDSIDE
{
    output.i = 40;
    
    
    
    text(output.i);
    option(output.i);
    
    cout << "\n \t\033[31;1mINPUT >> \033[0m";
    cin >> output.input;
    
    room_state_firstFloor[output.i] = 1;
    
    return output;
}

dataReturn scenario_3_2_1_2() // :DRESSING TABLE
{
    output.i = 41;
    
    
    
    text(output.i);
    option(output.i);
    
    cout << "\n \t\033[31;1mINPUT >> \033[0m";
    cin >> output.input;
    
    room_state_firstFloor[output.i] = 1;
    
    return output;
}

dataReturn scenario_3_2_1_2_1() // :SAFE
{
    output.i = 42;
    
    
    
    text(output.i);
    option(output.i);
    
    cout << "\n \t\033[31;1mINPUT >> \033[0m";
    cin >> output.input;
    
    room_state_firstFloor[output.i] = 1;
    
    return output;
}

dataReturn scenario_3_2_1_2_1_inv() // :SAFE OPEN
{
    output.i = -19;
    
    
    
    text(output.i);
    option(output.i);
    
    cout << "\n \t\033[31;1mINPUT >> \033[0m";
    cin >> output.input;
    
    room_state_firstFloor[output.i] = 1;
    
    return output;
}

dataReturn scenario_3_2_1_2_1_inv_2() // :DIARY
{
    output.i = -20;
    
    
    
    text(output.i);
    option(output.i);
    
    cout << "\n \t\033[31;1mINPUT >> \033[0m";
    cin >> output.input;
    
    room_state_firstFloor[output.i] = 1;
    
    return output;
}

dataReturn scenario_3_2_1_2_1_inv_3() // :DIARY CONTENT
{
    output.i = -21;
    
    
    
    text(output.i);
    option(output.i);
    
    cout << "\n \t\033[31;1mINPUT >> \033[0m";
    cin >> output.input;
    
    room_state_firstFloor[output.i] = 1;
    
    return output;
}

dataReturn scenario_3_2_2() // level 2 study room
{
    output.i = 43;
    
    
    
    room_state_check_firstFloor(output.i);
    text(output.i);
    option(output.i);
    
    cout << "\n \t\033[31;1mINPUT >> \033[0m";
    cin >> output.input;
    
    room_state_firstFloor[output.i] = 1;
    
    return output;
}

dataReturn scenario_3_2_2_1() // :TABLE
{
    output.i = 44;
    
    
    
    text(output.i);
    option(output.i);
    
    cout << "\n \t\033[31;1mINPUT >> \033[0m";
    cin >> output.input;
    
    room_state_firstFloor[output.i] = 1;
    
    return output;
}

dataReturn scenario_3_2_2_1_1() // :TEXT
{
    output.i = 45;
    
    
    
    text(output.i);
    option(output.i);
    
    cout << "\n \t\033[31;1mINPUT >> \033[0m";
    cin >> output.input;
    
    room_state_firstFloor[output.i] = 1;
    
    return output;
}

dataReturn scenario_3_2_2_2() // :WINDOW
{
    output.i = 46;
    
    
    
    text(output.i);
    option(output.i);
    
    cout << "\n \t\033[31;1mINPUT >> \033[0m";
    cin >> output.input;
    
    room_state_firstFloor[output.i] = 1;
    
    return output;
}

dataReturn scenario_3_2_2_2_pp() // :PUZZLE 6
{
    output.i = -22;
    
    
    
    text(output.i);
    option(output.i);
    
    cout << "\n \t\033[31;1mINPUT >> \033[0m";
    cin >> output.input;
    
    room_state_firstFloor[output.i] = 1;
    
    return output;
}

dataReturn scenario_3_2_3() // level 2 bathroom
{
    output.i = 47;
    
    
    
    room_state_check_firstFloor(output.i);
    text(output.i);
    option(output.i);
    
    cout << "\n \t\033[31;1mINPUT >> \033[0m";
    cin >> output.input;
    
    room_state_firstFloor[output.i] = 1;
    
    return output;
}

dataReturn scenario_3_2_3_1() // :SINK
{
    output.i = 48;
    
    
    
    text(output.i);
    option(output.i);
    
    cout << "\n \t\033[31;1mINPUT >> \033[0m";
    cin >> output.input;
    
    room_state_firstFloor[output.i] = 1;
    
    return output;
}

dataReturn scenario_3_2_3_2() // :FLOOR
{
    output.i = 49;
    
    
    
    text(output.i);
    option(output.i);
    
    cout << "\n \t\033[31;1mINPUT >> \033[0m";
    cin >> output.input;
    
    room_state_firstFloor[output.i] = 1;
    
    return output;
}

dataReturn scenario_3_2_3_2_pp() // :PUZZLE 8
{
    output.i = -25;
    
    
    
    text(output.i);
    option(output.i);
    
    cout << "\n \t\033[31;1mINPUT >> \033[0m";
    cin >> output.input;
    
    room_state_firstFloor[output.i] = 1;
    
    return output;
}

dataReturn scenario_3_2_3_3() // :WALL
{
    output.i = 50;
    
    
    
    text(output.i);
    option(output.i);
    
    cout << "\n \t\033[31;1mINPUT >> \033[0m";
    cin >> output.input;
    
    room_state_firstFloor[output.i] = 1;
    
    return output;
}

dataReturn scenario_3_3() // :NOT ENOUGH PUZZLE AGAIN
{
    output.i = 97;
    text(output.i);
    usleep(3000000);
    
    return output;
}

dataReturn scenario_3_4() // :GHOST
{
    output.i = 96;
    text(output.i);
    usleep(3000000);
    
    return output;
}

dataReturn scenario_4() // level 3 central hall
{
    output.i = 51;
    
    
    
    text(output.i);
    option(output.i);
    
    cout << "\n \t\033[31;1mINPUT >> \033[0m";
    cin >> output.input;
    
    room_state_firstFloor[output.i] = 1;
    
    return output;
}

dataReturn scenario_4_1() // level 3 left hallway
{
    output.i = 52;
    
    
    
    text(output.i);
    option(output.i);
    
    cout << "\n \t\033[31;1mINPUT >> \033[0m";
    cin >> output.input;
    
    room_state_firstFloor[output.i] = 1;
    
    return output;
}

dataReturn scenario_4_1_1() // level 3 theatre
{
    output.i = 53;
    
    
    
    room_state_check_firstFloor(output.i);
    text(output.i);
    option(output.i);
    
    cout << "\n \t\033[31;1mINPUT >> \033[0m";
    cin >> output.input;
    
    room_state_firstFloor[output.i] = 1;
    
    return output;
}

dataReturn scenario_4_2() // level 3 right hallway
{
    output.i = 54;
    
    
    
    text(output.i);
    option(output.i);
    
    cout << "\n \t\033[31;1mINPUT >> \033[0m";
    cin >> output.input;
    
    room_state_firstFloor[output.i] = 1;
    
    return output;
}

dataReturn scenario_4_2_1() // level 3 storage
{
    output.i = 55;
    
    
    
    room_state_check_firstFloor(output.i);
    text(output.i);
    option(output.i);
    
    cout << "\n \t\033[31;1mINPUT >> \033[0m";
    cin >> output.input;
    
    room_state_firstFloor[output.i] = 1;
    
    return output;
}

dataReturn scenario_4_2_1_1_pp() // :PUZZLE 2 & 4
{
    output.i = -28;
    
    
    
    text(output.i);
    option(output.i);
    
    cout << "\n \t\033[31;1mINPUT >> \033[0m";
    cin >> output.input;
    
    room_state_firstFloor[output.i] = 1;
    
    return output;
}

dataReturn scenario_4_2_1_2() // :NEWSPAPERS
{
    output.i = 56;
    
    
    
    text(output.i);
    option(output.i);
    
    cout << "\n \t\033[31;1mINPUT >> \033[0m";
    cin >> output.input;
    
    room_state_firstFloor[output.i] = 1;
    
    return output;
}

dataReturn scenario_5() // ENDING
{
    output.i = 60;
    
    
    
    text(output.i);
    option(output.i);
    
    cout << "\n \t\033[31;1mINPUT >> \033[0m";
    cin >> output.input;
    
    room_state_firstFloor[output.i] = 1;
    
    return output;
}

dataReturn scenario_5_1() // :LIVE
{
    output.i = 61;
    text(output.i);
    usleep(3000000);
    text(70);
    
    running = 0;
    
    return output;
}

dataReturn scenario_5_2() // :DIE
{
    output.i = 62;
    text(output.i);
    usleep(3000000);
    text(70);
    
    running = 0;
    
    return output;
}

int room_state_check_firstFloor(int i)
{
    if (room_state_firstFloor[output.i] == 1)
    {
        cout
        << " \t\033[107m\033[1m\033[30m                                                                                        \033[0m\n"
        << " \t\033[107m\033[1m\033[31m                 ** YOU HAVE ALREADY BEEN INTO THIS ROOM BEFORE **                      \033[0m\n"
        << " \t\033[107m\033[1m\033[30m                                                                                        \033[0m"
        << endl;
    }
    
    return 0;
}

int movement()
{
    while (running)
    {
        switch (output.i)
        {
            case 99:
                scenario_0();
            case 0:
                clearconsole();
                switch (output.input) // 0 -> 1
                {
                    case 1:
                        scenario_1();
                        break;
                    case 2:
                        text(-1);
                
                        cout << "\n \t\033[31;1mINPUT >> \033[0m";
                        cin >> output.input;
                
                        running = 0;
                        break;
                }
                break;
            case 1:
                clearconsole();
                switch (output.input) // 1 -> 2
                {
                    case 1:
                        scenario_2();
                        break;
                    case 2:
                        text(-1);
                
                        cout << "\n \t\033[31;1mINPUT >> \033[0m";
                        cin >> output.input;
                
                        running = 0;
                        break;
                }
                break;
            case 2:
                clearconsole();
                switch (output.input) // 2 -> 2_1, 2_2, 2_3; 3
                {
                    case 1:
                        scenario_2_1();
                        break;
                    case 2:
                        scenario_2_2();
                        break;
                    case 3:
                        if (puzzle_state[0] == 1 && puzzle_state[4] == 1 && puzzle_state[6] == 1)
                        {
                            scenario_3();
                            break;
                        }
                        else
                        {
                            scenario_2_3();
                            scenario_2();
                            break;
                        }
                }
                break;
            case 3:
                clearconsole();
                switch (output.input) // 2_1 -> 2_1_1, 2_1_2, 2_1_3; 2
                {
                    case 1:
                        scenario_2_1_1();
                        break;
                    case 2:
                        if (puzzle_state[0] != 1)
                        {
                            scenario_2_1_2_pp();
                            break;
                        }
                        else
                        {
                            scenario_2_1_2();
                            break;
                        }
                    case 3:
                        scenario_2_1_3();
                        break;
                    case 4:
                        scenario_2();
                        break;
                }
                break;
            case 4:
                clearconsole();
                switch (output.input) // 2_1_1 -> 2_1_1_1, 2_1_1_2; 2_1
                {
                    case 1:
                        if (inventory_state[0] != 1)
                        {
                            scenario_2_1_1_1();
                            break;
                        }
                        else
                        {
                            scenario_2_1_1_1_inv();
                            if (output.input == 3)
                            {
                                text(-15);
                                scenario_2_1_1();
                                break;
                            }
                            else if (output.input == 1)
                            {
                                scenario_2_1();
                                break;
                            }
                            else if (output.input == 2)
                            {
                                scenario_2_1_1_2();
                                break;
                            }
                        }
                    case 2:
                        scenario_2_1_1_2();
                        break;
                    case 3:
                        scenario_2_1();
                        break;
                }
                break;
            case 5:
                clearconsole();
                switch (output.input) // 2_1_1_1 -> 2_1_1_2; 2_1
                {
                    case 1:
                        scenario_2_1_1_2();
                        break;
                    case 2:
                        scenario_2_1();
                        break;
                }
                break;
            case 6:
                clearconsole();
                switch (output.input) // 2_1_1_2 -> 2_1_1_1; 2_1
                {
                    case 1:
                        scenario_2_1_1_1();
                        break;
                    case 2:
                        scenario_2_1();
                        break;
                }
                break;
            case 7:
                clearconsole();
                switch (output.input) // 2_1_2 -> 2_1
                {
                    case 1:
                        scenario_2_1();
                        break;
                }
                break;
            case -2:
                clearconsole();
                switch (output.input) // 2_1_2 -> 2_1_2_pp,pp_2,pp_3; 2_1
                {
                    case 1:
                        scenario_2_1();
                        break;
                    case 2:
                        text(-3);
                        option(-3);
                        
                        cout << "\n \t\033[31;1mINPUT >> \033[0m";
                        cin >> output.input;
                        
                        if (output.input == 2)
                        {
                            puzzle_state[0] = 1;
                            text(-4);
                            scenario_2_1_2();
                            break;
                        }
                        else if (output.input == 1)
                        {
                            scenario_2_1();
                            break;
                        }
                }
                break;
            case 9:
                clearconsole();
                switch (output.input) // 2_1_3 -> 2_1_3_1, 2_1_3_2; 2_1
                {
                    case 1:
                        scenario_2_1_3_1();
                        break;
                    case 2:
                        if (puzzle_state[4] != 1)
                        {
                            scenario_2_1_3_2_pp();
                            break;
                        }
                        else
                        {
                            scenario_2_1_3_2();
                        }
                        break;
                    case 3:
                        scenario_2_1();
                        break;
                }
                break;
            case 10:
                clearconsole();
                switch (output.input) // 2_1_3_1 -> 2_1_3_2; 2_1
                {
                    case 1:
                        if (puzzle_state[4] != 1)
                        {
                            scenario_2_1_3_2_pp();
                            break;
                        }
                        else
                        {
                            scenario_2_1_3_2();
                        }
                        break;
                    case 2:
                        scenario_2_1();
                        break;
                }
                break;
            case 11:
                clearconsole();
                switch (output.input) // 2_1_3_2 -> 2_1_3_1; 2_1
                {
                    case 1:
                        scenario_2_1_3_1();
                        break;
                    case 2:
                        scenario_2_1_3();
                        break;
                }
                break;
            case -5:
                clearconsole();
                switch (output.input) // 2_1_3_2 -> 2_1_3_1, 2_1_3_2_pp,pp_2,pp_3; 2_1
                {
                    case 1:
                        scenario_2_1();
                        break;
                    case 2:
                        scenario_2_1_3_1();
                        break;
                    case 3:
                        text(-6);
                        option(-6);
                        
                        cout << "\n \t\033[31;1mINPUT >> \033[0m";
                        cin >> output.input;
                        
                        if (output.input == 3)
                        {
                            puzzle_state[4] = 1;
                            text(-7);
                            scenario_2_1_3();
                            break;
                        }
                        else if (output.input == 1)
                        {
                            scenario_2_1();
                            break;
                        }
                        else if (output.input == 2)
                        {
                            scenario_2_1_3_1();
                            break;
                        }
                }
                break;
            case 12:
                clearconsole();
                switch (output.input) // 2_2 -> 2_2_1, 2_2_2; 2
                {
                    case 1:
                        scenario_2_2_1();
                        break;
                    case 2:
                        scenario_2_2_2();
                        break;
                    case 3:
                        scenario_2();
                        break;
                }
                break;
            case 13:
                clearconsole();
                switch (output.input) // 2_2_1 -> 2_2_3, 2_2_1_1, 2_2_1_1_inv, 2_2_1_2; 2_2
                {
                    case 1:
                        scenario_2_2();
                        break;
                    case 2:
                        scenario_2_2_1_2();
                        break;
                    case 3:
                        if (inventory_state[0] != 1)
                        {
                            scenario_2_2_1_1_inv();
                            break;
                        }
                        else
                        {
                            scenario_2_2_1_1();
                            break;
                        }
                    case 4:
                        scenario_2_2_3();
                        break;
                }
                break;
            case 14:
                clearconsole();
                switch (output.input) // 2_2_1_1 -> 2_2_1_2, 2_2_3; 2_2
                {
                    case 1:
                        scenario_2_2();
                        break;
                    case 2:
                        scenario_2_2_1_2();
                        break;
                    case 3:
                        scenario_2_2_3();
                        break;
                }
                break;
            case -8:
                clearconsole();
                switch (output.input) // 2_2_1_1_inv -> 2_2_1_2, 2_2_3, 2_2_1_1_inv_2; 2_2
                {
                    case 1:
                        scenario_2_2();
                        break;
                    case 2:
                        scenario_2_2_1_2();
                        break;
                    case 3:
                        scenario_2_2_3();
                        break;
                    case 4:
                        inventory_state[0] = 1;
                        text(-9);
                        scenario_2_2_1();
                        break;
                      
                }
                break;
            case 15:
                clearconsole();
                switch (output.input) // 2_2_1_2 -> 2_2_3, 2_2_1_1, 2_2_1_1_inv; 2_2
                {
                    case 1:
                        scenario_2_2();
                        break;
                    case 2:
                        if (inventory_state[0] != 1)
                        {
                            scenario_2_2_1_1_inv();
                            break;
                        }
                        else
                        {
                            scenario_2_2_1_1();
                            break;
                        }
                    case 3:
                        scenario_2_2_3();
                        break;
                }
                break;
            case 16:
                clearconsole();
                switch (output.input) // 2_2_3 -> 2_2_3_134, 2_2_3_2, 2_2_3_2_inv; 2_2_1
                {
                    case 1:
                        scenario_2_2_1();
                        break;
                    case 3:
                        if (inventory_state[1] != 1)
                        {
                            scenario_2_2_3_1_inv();
                            break;
                        }
                        else
                        {
                            scenario_2_2_3_1();
                            break;
                        }
                    case 2:
                        scenario_2_2_3_1();
                        break;
                    case 4:
                        scenario_2_2_3_1();
                        break;
                    case 5:
                        scenario_2_2_3_1();
                        break;
                }
                break;
            case 17:
                clearconsole();
                switch (output.input) // 2_2_3_134 -> 2_2_3; 2_2_1
                {
                    case 1:
                        scenario_2_2_1();
                        break;
                    case 2:
                        scenario_2_2_3();
                        break;
                }
                break;
            case -10:
                clearconsole();
                switch (output.input) // 2_2_3_2_inv -> 2_2_3; 2_2_1
                {
                    case 1:
                        scenario_2_2_1();
                        break;
                    case 2:
                        scenario_2_2_3();
                        break;
                    case 3:
                        inventory_state[1] = 1;
                        text(-11);
                        scenario_2_2_1();
                        break;
                }
                break;
            case 18:
                clearconsole();
                switch (output.input) // 2_2_2 -> 2_2_2_1, 2_2_2_1_pp, 2_2_2_2, 2_2_2_3; 2_2
                {
                    case 1:
                        scenario_2_2();
                        break;
                    case 2:
                        if (puzzle_state[6] != 1)
                        {
                            scenario_2_2_2_1_pp();
                            break;
                        }
                        else
                        {
                            scenario_2_2_2_1();
                            break;
                        }
                    case 3:
                        scenario_2_2_2_2();
                        break;
                    case 4:
                        scenario_2_2_2_3();
                        break;
                }
                break;
            case 19:
                clearconsole();
                switch (output.input) // 2_2_2_1 -> 2_2_2_2, 2_2_2_3; 2_2
                {
                    case 1:
                        scenario_2_2();
                        break;
                    case 2:
                        scenario_2_2_2_2();
                        break;
                    case 3:
                        scenario_2_2_2_3();
                        break;
                }
                break;
            case -12:
                clearconsole();
                switch (output.input) // 2_2_2_1_pp -> 2_2_2_2, 2_2_2_3; 2_2
                {
                    case 1:
                        scenario_2_2();
                        break;
                    case 2:
                        scenario_2_2_2_2();
                        break;
                    case 3:
                        scenario_2_2_2_3();
                        break;
                    case 4:
                        text(-13);
                        option(-13);
                        
                        cout << "\n \t\033[31;1mINPUT >> \033[0m";
                        cin >> output.input;
                        
                        if (output.input == 4)
                        {
                            puzzle_state[6] = 1;
                            text(-14);
                            scenario_2_2_2();
                            break;
                        }
                        else if (output.input == 1)
                        {
                            scenario_2_2();
                            break;
                        }
                        else if (output.input == 2)
                        {
                            scenario_2_2_2_2();
                            break;
                        }
                        else if (output.input == 3)
                        {
                            scenario_2_2_2_3();
                            break;
                        }
                }
                break;
            case 20:
                clearconsole();
                switch (output.input) // 2_2_2_1 -> 2_2_2_2, 2_2_2_3; 2_2
                {
                    case 1:
                        scenario_2_2();
                        break;
                    case 2:
                        scenario_2_2_2();
                        break;
                    case 3:
                        scenario_2_2_2_3();
                        break;
                }
                break;
            case 21:
                clearconsole();
                switch (output.input) // 2_2_2_1 -> 2_2_2_2, 2_2_2_3; 2_2
                {
                    case 1:
                        scenario_2_2();
                        break;
                    case 2:
                        scenario_2_2_2();
                        break;
                    case 3:
                        scenario_2_2_2_2();
                        break;
                }
                break;
        ///////////////////////////////////////////////////////////////////////////
            case 22:
                clearconsole();
                switch (output.input) // 3 -> 3_1, 3_2, 3_3; 3
                {
                    case 1:
                        scenario_3_1();
                        break;
                    case 2:
                        scenario_3_2();
                        break;
                    case 3:
                        if (puzzle_state[2] == 1 && puzzle_state[5] == 1 && puzzle_state[7] == 1 && puzzle_state[8] == 1)
                        {
                            scenario_3_4();
                            scenario_4();
                            break;
                        }
                        else
                        {
                            scenario_3_3();
                            scenario_3();
                            break;
                        }
                }
                break;
            case 23:
                clearconsole();
                switch (output.input) // 3_1 -> 3_1_1, 3_1_2, 3_1_3; 3
                {
                    case 1:
                        scenario_3_1_1();
                        break;
                    case 2:
                        scenario_3_1_2();
                        break;
                    case 3:
                        scenario_3_1_3();
                        break;
                    case 4:
                        scenario_3();
                        break;
                }
                break;
            case 24:
                clearconsole();
                switch (output.input) // 3_1_1 -> 3_1_1_1, 3_1_1_2, 3_1_1_3; 3_1
                {
                    case 1:
                        scenario_3_1_1_1();
                        break;
                    case 2:
                        scenario_3_1_1_2();
                        break;
                    case 3:
                        scenario_3_1_1_3();
                        break;
                    case 4:
                        scenario_3_1();
                        break;
                }
                break;
            case 25:
                clearconsole();
                switch (output.input) // 3_1_1_1 -> 3_1_1_2, 3_1_1_3; 3_1
                {
                    case 1:
                        scenario_3_1_1_2();
                        break;
                    case 2:
                        scenario_3_1_1_3();
                        break;
                    case 3:
                        scenario_3_1();
                        break;
                }
                break;
            case 26:
                clearconsole();
                switch (output.input) // 3_1_1_2 -> 3_1_1_2_1, 3_1_1_1, 3_1_1_3; 3_1
                {
                    case 1:
                        scenario_3_1_1_1();
                        break;
                    case 2:
                        scenario_3_1_1_2_1();
                        break;
                    case 3:
                        scenario_3_1_1_3();
                        break;
                    case 4:
                        scenario_3_1();
                        break;
                }
                break;
            case 27:
                clearconsole();
                switch (output.input) // 3_1_1_2_1 -> 3_1_1_1, 3_1_1_3; 3_1
                {
                    case 1:
                        scenario_3_1_1_1();
                        break;
                    case 2:
                        scenario_3_1_1_3();
                        break;
                    case 3:
                        scenario_3_1();
                        break;
                }
                break;
            case 28:
                clearconsole();
                switch (output.input) // 3_1_1_3 -> 3_1_1_1, 3_1_1_2; 3_1
                {
                    case 1:
                        scenario_3_1_1_1();
                        break;
                    case 2:
                        scenario_3_1_1_2();
                        break;
                    case 3:
                        scenario_3_1();
                        break;
                }
                break;
            case 29:
                clearconsole();
                switch (output.input) // 3_1_2 -> 3_1_2_1, 3_1_2_2, 3_1_2_3, 3_1_2_4; 3_1
                {
                    case 1:
                        scenario_3_1_2_1();
                        break;
                    case 2:
                        scenario_3_1_2_2();
                        break;
                    case 3:
                        scenario_3_1_2_3();
                        break;
                    case 4:
                        scenario_3_1_2_4();
                        break;
                    case 5:
                        scenario_3_1();
                        break;
                }
                break;
            case 30:
                clearconsole();
                switch (output.input) // 3_1_2_1 -> 3_1_2_1_1, 3_1_2_2, 3_1_2_3, 3_1_2_4; 3_1
                {
                    case 1:
                        scenario_3_1_2_1_1();
                        break;
                    case 2:
                        scenario_3_1_2_2();
                        break;
                    case 3:
                        scenario_3_1_2_3();
                        break;
                    case 4:
                        scenario_3_1_2_4();
                        break;
                    case 5:
                        scenario_3_1();
                        break;
                }
                break;
            case 31:
                clearconsole();
                switch (output.input) // 3_1_2_1_1 -> 3_1_2_2, 3_1_2_3, 3_1_2_4; 3_1
                {
                    case 1:
                        scenario_3_1_2_2();
                        break;
                    case 2:
                        scenario_3_1_2_3();
                        break;
                    case 3:
                        scenario_3_1_2_4();
                        break;
                    case 4:
                        scenario_3_1();
                        break;
                }
                break;
            case 32:
                clearconsole();
                switch (output.input) // 3_1_2_1_1 -> 3_1_2_2, 3_1_2_3, 3_1_2_4; 3_1
                {
                    case 1:
                        scenario_3_1_2_1();
                        break;
                    case 2:
                        scenario_3_1_2_3();
                        break;
                    case 3:
                        scenario_3_1_2_4();
                        break;
                    case 4:
                        scenario_3_1();
                        break;
                }
                break;
            case 33:
                clearconsole();
                switch (output.input) // 3_1_2_1_1 -> 3_1_2_2, 3_1_2_3, 3_1_2_4; 3_1
                {
                    case 1:
                        scenario_3_1_2_1();
                        break;
                    case 2:
                        scenario_3_1_2_2();
                        break;
                    case 3:
                        scenario_3_1_2_4();
                        break;
                    case 4:
                        scenario_3_1();
                        break;
                }
                break;
            case 34:
                clearconsole();
                switch (output.input) // 3_1_2_1_1 -> 3_1_2_2, 3_1_2_3, 3_1_2_4; 3_1
                {
                    case 1:
                        scenario_3_1_2_1();
                        break;
                    case 2:
                        scenario_3_1_2_2();
                        break;
                    case 3:
                        scenario_3_1_2_3();
                        break;
                    case 4:
                        scenario_3_1();
                        break;
                }
                break;
            case 35:
                clearconsole();
                switch (output.input) // 3_1_3 -> 3_1_2_1, pp3_1_2_2, 3_1_2_3, 3_1_2_4; 3_1
                {
                    case 1:
                        if (puzzle_state[2] != 1 && puzzle_state[8] != 1)
                        {
                            scenario_3_1_3_1_pp();
                            break;
                        }
                        else
                        {
                            scenario_3_1_3_1();
                            break;
                        }
                    case 2:
                        scenario_3_1_3_2();
                        break;
                    case 3:
                        scenario_3_1();
                        break;
                }
                break;
            case 36:
                clearconsole();
                switch (output.input) // 3_1_3_1 -> 3_1_2_1, 3_1_2_2, 3_1_2_3, 3_1_2_4; 3_1
                {
                    case 1:
                        scenario_3_1_3_2();
                        break;
                    case 2:
                        scenario_3_1();
                        break;
                }
                break;
            case -16:
                clearconsole();
                switch (output.input) // 3_1_3_1_pp -> 2_1_3_1, 2_1_3_2_pp,pp_2,pp_3; 2_1
                {
                    case 1:
                        scenario_3_1();
                        break;
                    case 2:
                        scenario_3_1_3_2();
                        break;
                    case 3:
                        text(-17);
                        option(-17);
                        
                        cout << "\n \t\033[31;1mINPUT >> \033[0m";
                        cin >> output.input;
                        
                        if (output.input == 3)
                        {
                            puzzle_state[2] = 1;
                            puzzle_state[8] = 1;
                            text(-18);
                            scenario_3_1_3();
                            break;
                        }
                        else if (output.input == 1)
                        {
                            scenario_3_1();
                            break;
                        }
                        else if (output.input == 2)
                        {
                            scenario_3_1_3_2();
                            break;
                        }
                }
                break;
            case 37:
                clearconsole();
                switch (output.input) // 3_1_3_2 -> 3_1_2_1, 3_1_2_2, 3_1_2_3, 3_1_2_4; 3_1
                {
                    case 1:
                        if (puzzle_state[2] != 1 && puzzle_state[8] != 1)
                        {
                            scenario_3_1_3_1_pp();
                            break;
                        }
                        else
                        {
                            scenario_3_1_3_1();
                            break;
                        }
                    case 2:
                        scenario_3_1();
                        break;
                }
                break;
            case 38:
                clearconsole();
                switch (output.input) // 3_2 -> 3_1_1, 3_1_2, 3_1_3; 3
                {
                    case 1:
                        scenario_3_2_1();
                        break;
                    case 2:
                        scenario_3_2_2();
                        break;
                    case 3:
                        scenario_3_2_3();
                        break;
                    case 4:
                        scenario_3();
                        break;
                }
                break;
            case 39:
                clearconsole();
                switch (output.input) // 3_2_1 -> 3_1_1_1, 3_1_1_2; 3_2
                {
                    case 1:
                        scenario_3_2_1_1();
                        break;
                    case 2:
                        scenario_3_2_1_2();
                        break;
                    case 3:
                        scenario_3_2();
                        break;
                }
                break;
            case 40:
                clearconsole();
                switch (output.input) // 3_2_1_1 -> 3_1_1_1, 3_1_1_2; 3_2
                {
                    case 1:
                        scenario_3_2_1_2();
                        break;
                    case 2:
                        scenario_3_2();
                        break;
                }
                break;
            case 41:
                clearconsole();
                switch (output.input) // 3_2_1_2 -> 3_1_1_1, 3_1_1_2; 3_2
                {
                    case 1:
                        scenario_3_2_1_1();
                        break;
                    case 2:
                        if (inventory_state[1] != 1)
                        {
                            scenario_3_2_1_2_1();
                            break;
                        }
                        else
                        {
                            scenario_3_2_1_2_1_inv();
                            break;
                        }
                    case 3:
                        scenario_3_2();
                        break;
                }
                break;
            case 42:
                clearconsole();
                switch (output.input) // 3_2_1_2_1 -> 3_1_1_1, 3_1_1_2; 3_2
                {
                    case 1:
                        scenario_3_2_1_1();
                        break;
                    case 2:
                        scenario_3_2();
                        break;
                }
                break;
            case -19:
                clearconsole();
                switch (output.input) // 3_2_1_2_1_inv -> 3_1_1_1, 3_1_1_2; 3_2
                {
                    case 1:
                        scenario_3_2_1_1();
                        break;
                    case 2:
                        scenario_3_2_1_2_1_inv_2();
                        break;
                    case 3:
                        scenario_3_2();
                        break;
                }
                break;
            case -20:
                clearconsole();
                switch (output.input) // 3_2_1_2_1_inv -> 3_1_1_1, 3_1_1_2; 3_2
                {
                    case 1:
                        scenario_3_2_1_1();
                        break;
                    case 2:
                        scenario_3_2_1_2_1_inv_3();
                        break;
                    case 3:
                        scenario_3_2();
                        break;
                }
                break;
            case -21:
                clearconsole();
                switch (output.input) // 3_2_1_2_1_inv -> 3_1_1_1, 3_1_1_2; 3_2
                {
                    case 1:
                        scenario_3_2_1_1();
                        break;
                    case 2:
                        scenario_3_2();
                        break;
                }
                break;
            case 43:
                clearconsole();
                switch (output.input) // 3_2_2 -> 3_1_1_1, 3_1_1_2; 3_2
                {
                    case 1:
                        scenario_3_2_2_1();
                        break;
                    case 2:
                        if (puzzle_state[7] != 1)
                        {
                            scenario_3_2_2_2_pp();
                            break;
                        }
                        else
                        {
                            scenario_3_2_2_2();
                            break;
                        }
                    case 3:
                        scenario_3_2();
                        break;
                }
                break;
            case 44:
                clearconsole();
                switch (output.input) // 3_2_2_1 -> 3_1_1_1, 3_1_1_2; 3_2
                {
                    case 1:
                        scenario_3_2_2_1_1();
                        break;
                    case 2:
                        if (puzzle_state[7] != 1)
                        {
                            scenario_3_2_2_2_pp();
                            break;
                        }
                        else
                        {
                            scenario_3_2_2_2();
                            break;
                        }
                    case 3:
                        scenario_3_2();
                        break;
                }
                break;
            case 45:
                clearconsole();
                switch (output.input) // 3_2_2_1_1 -> 3_1_1_1, 3_1_1_2; 3_2
                {
                    case 1:
                        if (puzzle_state[7] != 1)
                        {
                            scenario_3_2_2_2_pp();
                            break;
                        }
                        else
                        {
                            scenario_3_2_2_2();
                            break;
                        }
                    case 2:
                        scenario_3_2();
                        break;
                }
                break;
            case 46:
                clearconsole();
                switch (output.input) // 3_2_2_2 -> 3_1_1_1, 3_1_1_2; 3_2
                {
                    case 1:
                        scenario_3_2_2_1();
                        break;
                    case 2:
                        scenario_3_2();
                        break;
                }
                break;
            case -22:
                clearconsole();
                switch (output.input) // 3_2_3_2_pp -> 2_1_3_1, 2_1_3_2_pp,pp_2,pp_3; 3_2
                {
                    case 1:
                        scenario_3_2();
                        break;
                    case 2:
                        scenario_3_2_2_1();
                        break;
                    case 3:
                        text(-23);
                        option(-23);
                        
                        cout << "\n \t\033[31;1mINPUT >> \033[0m";
                        cin >> output.input;
                        
                        if (output.input == 3)
                        {
                            puzzle_state[7] = 1;
                            text(-24);
                            scenario_3_2_2();
                            break;
                        }
                        else if (output.input == 1)
                        {
                            scenario_3_2();
                            break;
                        }
                        else if (output.input == 2)
                        {
                            scenario_3_2_2_1();
                            break;
                        }
                }
                break;
            case 47:
                clearconsole();
                switch (output.input) // 3_2_3 -> 3_1_1_1, 3_1_1_2; 3_2
                {
                    case 1:
                        scenario_3_2_3_1();
                        break;
                    case 2:
                        if (puzzle_state[5] != 1)
                        {
                            scenario_3_2_3_2_pp();
                            break;
                        }
                        else
                        {
                            scenario_3_2_3_2();
                            break;
                        }
                    case 3:
                        scenario_3_2_3_3();
                        break;
                    case 4:
                        scenario_3_2();
                        break;
                }
                break;
            case 48:
                clearconsole();
                switch (output.input) // 3_2_3_1 -> 3_1_1_1, 3_1_1_2; 3_2
                {
                    case 1:
                        if (puzzle_state[5] != 1)
                        {
                            scenario_3_2_3_2_pp();
                            break;
                        }
                        else
                        {
                            scenario_3_2_3_2();
                            break;
                        }
                    case 2:
                        scenario_3_2_3_3();
                        break;
                    case 3:
                        scenario_3_2();
                        break;
                }
                break;
            case 49:
                clearconsole();
                switch (output.input) // 3_2_3_2 -> 3_1_1_1, 3_1_1_2; 3_2
                {
                    case 1:
                        scenario_3_2_3_1();
                        break;
                    case 2:
                        scenario_3_2_3_3();
                        break;
                    case 3:
                        scenario_3_2();
                        break;
                }
                break;
            case -25:
                clearconsole();
                switch (output.input) // 3_2_3_2_pp -> 2_1_3_1, 2_1_3_2_pp,pp_2,pp_3; 3_2
                {
                    case 1:
                        scenario_3_2();
                        break;
                    case 2:
                        scenario_3_2_3_1();
                        break;
                    case 3:
                        scenario_3_2_3_3();
                        break;
                    case 4:
                        text(-26);
                        option(-26);
                        
                        cout << "\n \t\033[31;1mINPUT >> \033[0m";
                        cin >> output.input;
                        
                        if (output.input == 4)
                        {
                            puzzle_state[5] = 1;
                            text(-27);
                            scenario_3_2_3();
                            break;
                        }
                        else if (output.input == 1)
                        {
                            scenario_3_2();
                            break;
                        }
                        else if (output.input == 2)
                        {
                            scenario_3_2_3_1();
                            break;
                        }
                        else if (output.input == 3)
                        {
                            scenario_3_2_3_3();
                            break;
                        }
                }
                break;
            case 50:
                clearconsole();
                switch (output.input) // 3_2_3_2 -> 3_1_1_1, 3_1_1_2; 3_2
                {
                    case 1:
                        scenario_3_2_3_1();
                        break;
                    case 2:
                        if (puzzle_state[7] != 1)
                        {
                            scenario_3_2_3_2_pp();
                            break;
                        }
                        else
                        {
                            scenario_3_2_3_2();
                            break;
                        }
                    case 3:
                        scenario_3_2();
                        break;
                }
                break;
        ///////////////////////////////////////////////
            case 51:
                clearconsole();
                switch (output.input) // 4 -> 4_1, 4_2, 4_3; 3
                {
                    case 1:
                        scenario_4_1();
                        break;
                    case 2:
                        scenario_4_2();
                        break;
                }
                break;
            case 52:
                clearconsole();
                switch (output.input) // 4_1 -> 3_1_1, 3_1_2, 3_1_3; 3
                {
                    case 1:
                        scenario_4_1_1();
                        break;
                    case 2:
                        scenario_4();
                        break;
                }
                break;
            case 53:
                clearconsole();
                switch (output.input) // 4_1_1 -> 3_1_1, 3_1_2, 3_1_3; 3
                {
                    case 1:
                        scenario_4();
                        break;
                }
                break;
            case 54:
                clearconsole();
                switch (output.input) // 4_2 -> 3_1_1, 3_1_2, 3_1_3; 3
                {
                    case 1:
                        scenario_4_2_1();
                        break;
                    case 2:
                        scenario_4();
                        break;
                }
                break;
            case 55:
                clearconsole();
                switch (output.input) // 4_2_1 -> 3_1_1, 3_1_2, 3_1_3; 3
                {
                    case 1:
                        scenario_4_2_1_1_pp();
                        break;
                    case 2:
                        scenario_4_2_1_2();
                        break;
                    case 3:
                        scenario_4();
                        break;
                }
                break;
            case -28:
                clearconsole();
                switch (output.input) // 4_2_1_1_pp -> 2_1_3_1, 2_1_3_2_pp,pp_2,pp_3; 3_2
                {
                    case 1:
                        scenario_4();
                        break;
                    case 2:
                        scenario_4_2_1_2();
                        break;
                    case 3:
                        text(-29);
                        option(-29);
                        
                        cout << "\n \t\033[31;1mINPUT >> \033[0m";
                        cin >> output.input;
                        
                        if (output.input == 3)
                        {
                            puzzle_state[1] = 1;
                            puzzle_state[3] = 1;
                            text(-30);
                            scenario_5();
                            break;
                        }
                        else if (output.input == 1)
                        {
                            scenario_4();
                            break;
                        }
                        else if (output.input == 2)
                        {
                            scenario_4_2_1_2();
                            break;
                        case 56:
                            clearconsole();
                            switch (output.input) // 4_2_1_2 -> 3_1_1, 3_1_2, 3_1_3; 3
                            {
                                case 1:
                                    scenario_4_2_1_1_pp();
                                    break;
                                case 2:
                                    scenario_4();
                                    break;
                            }
                            break;
                        }
                }
                break;
            case 60:
                clearconsole();
                switch (output.input)
                {
                    case 1:
                        scenario_5_1();
                        break;
                    case 2:
                        scenario_5_2();
                        break;
                }
                break;
                
        }
    }
    return 0;
}


