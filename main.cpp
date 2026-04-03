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

    //create an empty Goat list using default constructor
    list<Goat> trip;

    //display main menu for program
    int choice = main_menu();
    while (choice != 4) {
        switch (choice) {
            case 1: add_goat(trip, names, colors);
            case 2: delete_goat(trip);
            case 3: display_trip(trip);
            default: if (choice != 4) cout << "Invalid choice, try again" << endl;
        }
        choice = main_menu();
    }

    cout << "Goodbye" << endl;
    return 0;
}

//description: select_goat() displays a menu, allowing the user to input an
// integer to reference the correct goat
//arguments: a Goat list object
//returns: an integer that references a specific Goat object in the passed list
int select_goat(list<Goat> trip) {
    cout << "Which goat would you like to delete?" << endl;
}

//description: delete_goat() deletes a Goat object from the passed list
//arguments: a Goat list object passed by reference
//returns: void
void delete_goat(list<Goat> &trip) {
    if (trip.empty()) {
        cout << "Sorry, list empty!" << endl;
        return;
    }
    else {

    }
}

//description: add_goat() adds a Goat object to the passed list
//arguments: a Goat list object passed by reference, a string array of names,
// a string array of colors
//returns: void
void add_goat(list<Goat> &trip, string n[], string c[]) {
    //randomly select name, age, color for new Goat
    string goat_name = n[rand() % SZ_NAMES];
    string goat_color = c[rand() % SZ_COLORS];
    int goat_age = rand() % MAX_AGE;
    //create Goat object with full parameter constructor
    //and push to trip list
    Goat temp(goat_name, goat_age, goat_color);
    trip.push_back(temp);
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
    int choice;
    cout << "*** GOAT MANAGER 3001 ***" << endl;
    cout << "[1] Add a goat" << endl
         << "[2] Delete a goat" << endl
         << "[3] List goats" << endl
         << "[4] Quit" << endl;
    cout << "Choice --> ";
    cin >> choice;
    return choice;
}