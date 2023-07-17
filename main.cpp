#include <iostream>
#include <cstdlib>
#include <limits>
#include <iomanip>
#include "conversion_library.h"
#include "error_handling_library.h"
#include "input_validation_library.h"

using namespace std;
using namespace ConversionLibrary;
using namespace ErrorHandlingLibrary;
using namespace InputValidationLibrary;
//using namespace UnitAbbreviationLibrary;

// Function to clear the screen
void clearScreen() {
    }



// Function to display the main menu
void displayMainMenu() {
    cout << "Welcome to The Unit Converter Program Version 1\n" << endl;
    cout << "You can convert the following units listed below.\n"<< endl;
    cout << "============================================================" << endl;
    cout << "1. Length Conversion" << endl;
    cout << "2. Mass Conversion" << endl;
    cout << "3. Volume Conversion" << endl;
    cout << "4. Temperature Conversion" << endl;
    cout << "5. Time Conversion" << endl;
    cout << "6. Exit" << endl;
    cout << endl;
    cout << "Enter your choice (1-6): ";
}

// Function to display the length conversion menu
void displayLengthConversionMenu() {
    cout << "\nLength Conversion" << endl;
    cout << "============================================================" << endl;
    cout << "1. Meters to Feet" << endl;
    cout << "2. Feet to Meters" << endl;
    cout << "3. Return to Main Menu" << endl;
    cout << endl;
    cout << "Enter your choice (1-3): ";
}

// Function to display the mass conversion menu
void displayMassConversionMenu() {
    cout << "\nMass Conversion" << endl;
    cout << "============================================================" << endl;
    cout << "1. Kilograms to Pounds" << endl;
    cout << "2. Pounds to Kilograms" << endl;
    cout << "3. Return to Main Menu" << endl;
    cout << endl;
    cout << "Enter your choice (1-3): ";
}

// Function to display the volume conversion menu
void displayVolumeConversionMenu() {
    cout << "\nVolume Conversion" << endl;
    cout << "============================================================" << endl;
    cout << "1. Liters to Gallons" << endl;
    cout << "2. Gallons to Liters" << endl;
    cout << "3. Return to Main Menu" << endl;
    cout << endl;
    cout << "Enter your choice (1-3): ";
}

// Function to display the temperature conversion menu
void displayTemperatureConversionMenu() {
    cout << "\nTemperature Conversion" << endl;
    cout << "============================================================" << endl;
    cout << "1. Celsius to Fahrenheit" << endl;
    cout << "2. Fahrenheit to Celsius" << endl;
    cout << "3. Return to Main Menu" << endl;
    cout << endl;
    cout << "Enter your choice (1-3): ";
}

// Function to display the time conversion menu
void displayTimeConversionMenu() {
    cout << "\nTime Conversion" << endl;
    cout << "============================================================" << endl;
    cout << "1. Seconds to Minutes" << endl;
    cout << "2. Minutes to Seconds" << endl;
    cout << "3. Return to Main Menu" << endl;
    cout << endl;
    cout << "Enter your choice (1-3): ";
}


// Function to get user input for conversion choice
int getConversionChoice(int minChoice, int maxChoice) {
    int choice;
    cout << "Enter your choice (" << minChoice << "-" << maxChoice << "): ";
    cin >> choice;
    while (cin.fail() || choice < minChoice || choice > maxChoice) {
        cout << "Invalid choice. Please enter a valid choice (" << minChoice << "-" << maxChoice << "): ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin >> choice;
    }
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    return choice;
}

// Function to get user input for value to be converted
double getConversionValue() {
    double value;
    cout << "Enter the value to be converted: ";
    cin >> value;
    while (cin.fail()) {
        cout << "Invalid input. Please enter a valid numeric value: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin >> value;
    }
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    return value;
}

// Function to perform length conversion based on user choice
void performLengthConversion(int choice) {
    clearScreen();
    double value;
    string unitFrom, unitTo;
    switch (choice) {
        case 1:
            unitFrom = "meters";
            unitTo = "feet";
            value = getConversionValue();
            cout << value << " " << unitFrom << " is equal to " << metersToFeet(value) << " " << unitTo << "." << endl;
            break;
        case 2:
            unitFrom = "feet";
            unitTo = "meters";
            value = getConversionValue();
            cout << value << " " << unitFrom << " is equal to " << feetToMeters(value) << " " << unitTo << "." << endl;
            break;
    }
}

// Function to perform mass conversion based on user choice
void performMassConversion(int choice) {
    clearScreen();
    double value;
    string unitFrom, unitTo;
    switch (choice) {
        case 1:
            unitFrom = "kilograms";
            unitTo = "pounds";
            value = getConversionValue();
            cout << value << " " << unitFrom << " is equal to " << kilogramsToPounds(value) << " " << unitTo << "." << endl;
            break;
        case 2:
            unitFrom = "pounds";
            unitTo = "kilograms";
            value = getConversionValue();
            cout << value << " " << unitFrom << " is equal to " << poundsToKilograms(value) << " " << unitTo << "." << endl;


            break;
    }
}

// Function to perform volume conversion based on user choice
void performVolumeConversion(int choice) {
    clearScreen();
    double value;
    string unitFrom, unitTo;
    switch (choice) {
        case 1:
            unitFrom = "liters";
            unitTo = "gallons";
            value = getConversionValue();
            cout << value << " " << unitFrom << " is equal to " << litersToGallons(value) << " " << unitTo << "." << endl;
            break;
        case 2:
            unitFrom = "gallons";
            unitTo = "liters";
            value = getConversionValue();
            cout << value << " " << unitFrom << " is equal to " << gallonsToLiters(value) << " " << unitTo << "." << endl;
            break;
    }
}

// Function to perform temperature conversion based on user choice
void performTemperatureConversion(int choice) {
    clearScreen();
    double value;
    string unitFrom, unitTo;
    switch (choice) {
        case 1:
            unitFrom = "Celsius";
            unitTo = "Fahrenheit";
            value = getConversionValue();
            cout << fixed << setprecision(2);
            cout << value << " " << unitFrom << " is equal to " << celsiusToFahrenheit(value) << " " << unitTo << "." << endl;
            break;
        case 2:
            unitFrom = "Fahrenheit";
            unitTo = "Celsius";
            value = getConversionValue();
            cout << fixed << setprecision(2);
            cout << value << " " << unitFrom << " is equal to " << fahrenheitToCelsius(value) << " " << unitTo << "." << endl;
            break;
    }
}

// Function to perform time conversion based on user choice
void performTimeConversion(int choice) {
    clearScreen();
    double value;
    string unitFrom, unitTo;
    switch (choice) {
        case 1:
            unitFrom = "seconds";
            unitTo = "minutes";
            value = getConversionValue();
            cout << value << " " << unitFrom << " is equal to " << secondsToMinutes(value) << " " << unitTo << "." << endl;
            break;
        case 2:
            unitFrom = "minutes";
            unitTo = "seconds";
            value = getConversionValue();
            cout << value << " " << unitFrom << " is equal to " << minutesToSeconds(value) << " " << unitTo << "." << endl;
            break;
    }
}

int main() {
    int mainMenuChoice;
    int subMenuChoice;
    bool exitProgram = false;

    while (!exitProgram) {
        clearScreen();
        displayMainMenu();
        mainMenuChoice = getConversionChoice(1, 6);

        switch (mainMenuChoice) {
            case 1:
                clearScreen();
                displayLengthConversionMenu();
                subMenuChoice = getConversionChoice(1, 3);
                if (subMenuChoice == 3) {
                    continue;
                }
                performLengthConversion(subMenuChoice);
                break;
            case 2:
                clearScreen();
                displayMassConversionMenu();
                subMenuChoice = getConversionChoice(1, 3);
                if (subMenuChoice == 3) {
                    continue;
                }
                performMassConversion(subMenuChoice);
                break;
            case 3:
                clearScreen();
                displayVolumeConversionMenu();
                subMenuChoice = getConversionChoice(1, 3);
                if (subMenuChoice == 3) {
                    continue;
                }
                performVolumeConversion(subMenuChoice);
                break;
            case 4:
                clearScreen();
                displayTemperatureConversionMenu();
                subMenuChoice = getConversionChoice(1, 3);
                if (subMenuChoice == 3) {
                    continue;
                }
                performTemperatureConversion(subMenuChoice);
                break;
            case 5:
                clearScreen();
                displayTimeConversionMenu();
                subMenuChoice = getConversionChoice(1, 3);
                if (subMenuChoice == 3) {
                    continue;
                }
                performTimeConversion(subMenuChoice);
                break;
            case 6:
                exitProgram = true;
                break;
        }

        if (!exitProgram) {
            cout << endl;
            cout << "1. Do another conversion" << endl;
            cout << "2. Return to Main Menu" << endl;
            cout << "3. Exit" << endl;
            cout << endl;
            cout << "Enter your choice (1-3): ";
            int choice = getConversionChoice(1, 3);
            
			            if (choice == 2) {
                continue;
            } else if (choice == 3) {
                exitProgram = true;
            }
        }
    }

    return 0;
}
