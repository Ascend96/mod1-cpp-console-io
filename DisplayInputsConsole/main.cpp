#include <conio.h>
#include <iostream>
using namespace std;

int main() {
    // store variables
    string firstName, lastName, streetAddress, city, zip;

    cout << "Welcome to my first console application in C++!" << endl;
    cout << "The goal is to take inputs and display data to the console for the user." << endl;

    cout << "Please enter a first name: ";
    cin >> firstName;
    cout << "Please enter a last name: ";
    cin >> lastName;
    cout << "Please enter a street address: ";
    getline(cin, streetAddress); // use getline here because we want to allow spaces
    cout << "Please enter a city: ";
    getline(cin, city); // use getline since city might have spaces
    cout << "Please enter a zip code: ";
    cin >> zip;

    cout << "Here is your information: " << endl;
    cout << "First Name: " << firstName << endl;
    cout << "Last Name: " << lastName << endl;
    cout << "Street Address: " << streetAddress << endl;
    cout << "City: " << city << endl;
    cout << "Zip Code: " << zip << endl;

    // Wait for output
    getch();

    return 0;
}
