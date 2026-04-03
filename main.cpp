//*****************************************************************************
// COMSC-210 | Lab 23 | Gabriel Marquez
// Description: this program updates upgrades our previous Goat Manager 3000
// version with a new GM3K1 version that uses an std::list.
//*****************************************************************************

#include <iostream>
#include <fstream>
#include <iomanip>
#include <list>
#include "Goat.h"
using namespace std;

const int SZ_NAMES = 200, SZ_COLORS = 25, MAX_AGE = 20;

int select_goat(list<Goat> trip);
void delete_goat(list<Goat> &trip);
void add_goat(list<Goat> &trip, string [], string []);
void display_trip(list<Goat> trip);
int main_menu();

int main() {
    srand(time(0));
    bool again;

    // read & populate arrays for names and colors
    ifstream fin("names.txt");
    string names[SZ_NAMES];
    int i = 0;
    while (fin >> names[i++]);
    fin.close();
    ifstream fin1("colors.txt");
    string colors[SZ_COLORS];
    i = 0;
    while (fin1 >> colors[i++]);
    fin1.close();




    return 0;
}

//description: select_goat() displays a menu, allowing the user to input an
// integer to reference the correct goat
//arguments: a Goat list object
//returns: an integer that references a specific Goat object in the passed list
int select_goat(list<Goat> trip) {

}

//description: delete_goat() deletes a Goat object from the passed list
//arguments: a Goat list object passed by reference
//returns: void
void delete_goat(list<Goat> &trip) {

}

//description: add_goat() adds a Goat object to the passed list
//arguments: a Goat list object passed by reference, a string array of names,
// a string array of colors
//returns: void
void add_goat(list<Goat> &trip, string n[], string c[]) {

}

//description: display_trip() displays the contents of the passed list
//arguments: a Goat list object
//returns: void
void display_trip(list<Goat> trip) {

}

//description: main_menu() displays the menu options that give the user options
// of what do do in the program
//arguments: N/A
//returns: an integer used as the user's choice for what operation to perform
int main_menu() {
    
}