#include <conio.h>
#include <iostream>
using namespace std;

int main() {
    // store variables
    string firstName, lastName, streetAddress, city, zip;

    cout << "Welcome to my first console application in C++!" << endl;
    cout << "The goal is to take inputs and display data to the console for the user." << endl;

    cout << "Please enter a first name: ";
    getline(cin, firstName);
    cout << "Please enter a last name: ";
    getline(cin, lastName);
    cout << "Please enter a street address: ";
    getline(cin, streetAddress);
    cout << "Please enter a city: ";
    getline(cin, city);
    cout << "Please enter a zip code: ";
    getline(cin, zip);

    cout << "Here is your information: " << endl;
    cout << "First Name: " << firstName << endl;
    cout << "Last Name: " << lastName << endl;
    cout << "Street Address: " << streetAddress << endl;
    cout << "City: " << city << endl;
    cout << "Zip Code: " << zip << endl;

    // Wait for output
    cout << endl << "Press any key to exit.";
    getch();

    return 0;
}
